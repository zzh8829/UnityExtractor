import UnityClass
import UnitySerializer
import UnityStream

import pprint

if __name__ == "__main__":
	classes = UnityClass.UnityClass("4.2.2f1")
	serializer = UnitySerializer.UnitySerializer(classes)
	elsa = UnityStream.UnityStream(file=r"F:\Project\Qt\build\UnityExtractorCLI-5_2_0_Static-Release\197.bin")
	obj = serializer.deserialize("Mesh", elsa)
	pprint.pprint(obj)

	print(elsa.get_position())
	elsa.set_position(0,2)
	print(elsa.get_position())

