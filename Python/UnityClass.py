import imp


class UnityClass(dict):
	def __init__(self, version=None, *args, **kwargs):
		super(UnityClass, self).__init__(*args, **kwargs)

		self.versions = set()
		self.load("common")

		if version:
			self.load(version)

	def load(self, version):
		definitions = imp.load_source(version, "ClassDefinition/%s.py" % version)
		self.versions.add(definitions.version)
		self.update(definitions.classes)

	def reload(self):
		versions = list(self.versions)
		self.clear()
		self.versions.clear()
		for version in versions:
			self.load(version)


