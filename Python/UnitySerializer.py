import re

import UnityStream
import UnityObject


class UnitySerializer:
	def __init__(self, classes):
		self.classes = classes

	def serialize(self, obj, stream):
		pass

	def deserialize(self, classname, stream):
		if classname not in self.classes:
			if classname in UnityStream.types:
				return stream.read(classname)
			elif classname == 'string':
				string = stream.read_string()
				stream.align()
				return string
			elif classname == 'cstring':
				return stream.read_cstring()
			elif '[]' in classname:
				return [self.deserialize(classname[:-2], stream) for i in range(stream.read('uint32_t'))]
			else:
				match = re.search("\[(\d+)\]", classname)
				if match:
					return [self.deserialize(classname[:match.start()], stream) for i in range(int(match.group(1)))]
				else:
					raise Exception("[%s] Not Implemented" % classname)

		obj = UnityObject.UnityObject()
		for field in self.classes[classname]:
			if field[0] == 'align':
				stream.align()
			elif field[1] == 'baseclass':
				obj.update(self.deserialize(field[0],stream))
			else:
				obj[field[1]] = self.deserialize(field[0], stream)
		return obj
