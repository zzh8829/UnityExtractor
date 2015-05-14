import io
import struct

types = {
	'int8_t': 'b',
	'uint8_t': 'B',
	'int16_t': 'h',
	'uint16_t': 'H',
	'int32_t': 'i',
	'uint32_t': 'I',
	'int64_t': 'q',
	'uint64_t': 'Q',
	'float': 'f',
	'double': 'd',
	'char': 'c',
    'bool': '?',
    'pad': 'x',
    'void*': 'P',
}

class UnityStream:
	def __init__(self, **kwargs):
		if "file" in kwargs:
			self.stream = open(kwargs["file"], "rb")
		elif "stream" in kwargs:
			self.stream = kwargs["stream"]
		elif "bytes" in kwargs:
			self.stream = io.BytesIO(kwargs["bytes"])
		else:
			raise Exception("UnityStream arguments error")

	def read(self, type_name='char'):
		fmt = types[type_name.lower()]
		return self.unpack(fmt)[0]

	def unpack(self, fmt):
		return struct.unpack(fmt, self.stream.read(struct.calcsize(fmt)))

	def read_cstring(self):
		string = ""
		while True:
			char = self.read('char')
			if ord(char) == 0:
				break
			string += char.decode("utf-8")
		return string

	def read_string(self):
		return self.unpack('%ds'%self.read('uint32_t'))[0].decode('utf-8')

	def get_position(self):
		return self.stream.tell()

	def set_position(self, pos, whence=0):
		self.stream.seek(pos, whence)

	def align(self, alignment=4):
		self.set_position((self.get_position() + alignment - 1) // alignment * alignment) 

