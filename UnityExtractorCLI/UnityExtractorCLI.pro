TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle qt

SOURCES += main.cpp \
	UnityExtractor.cpp \
	UnityUtil.cpp \
	IO\BinaryReader.cpp \
	IO\TextWriter.cpp \
	Unity/Enums.cpp \
	Unity/Structs.cpp \
	Unity/NamedObject.cpp \
	Unity/Mesh.cpp \
	Unity/SerializedFile.cpp \
	Unity/Type.cpp \ 
	Unity/Object.cpp \
	Unity/Vector3f.cpp \
	Unity/SubMesh.cpp \
	Unity/AABB.cpp

HEADERS += \
	Common.h \
	UnityExtractor.h \
	UnityUtil.h \
	IO\StreamReader.h \
	IO\BinaryReader.h \
	IO\StreamWriter.h \
	IO\TextWriter.h \
	Unity/Enums.h \
	Unity/Structs.h \
	Unity/Object.h \
	Unity/NamedObject.h \
	Unity/Mesh.h \
	Unity/SerializedFile.h \
	Unity/Type.h \ 
	Unity/Vector3f.h \
	Unity/SubMesh.h \
	Unity/AABB.h

OTHER_FILES +=
