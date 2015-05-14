import collections

class UnityObject(collections.OrderedDict):
	def __init__(self, *args, **kwargs):
		super(UnityObject, self).__init__(*args, **kwargs)

	def __getattr__(self, item):
		if item in self:
			return self.__getitem__(item)
		else:
			return self.__getattribute__(item)

	def __setattr__(self, key, value):
		if key in self:
			return self.__setitem__(key,value)
		else:
			return super(UnityObject, self).__setattr__(key, value)