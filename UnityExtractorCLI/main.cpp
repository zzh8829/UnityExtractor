#include "Common.h"
#include "UnityExtractor.h"
using namespace std;

string path = "F:/Project/Game/Frozen/Data/";

int main(int argc, char *argv[])
{
	string filename = "F:/Project/Game/Frozen/Data/mainData";
	//filename = "F:/Project/Game/Frozen/Data/sharedassets0.assets";
	filename = path + "unity default resources";
	filename = path + "resources.assets";
	//filename = path + "Resources/unity_builtin_extra";
	if(argc > 1)
	{
		filename = argv[1];
	}
	UnityExtractor extractor(filename);
	extractor.Process();

	//ofstream ot(filename + ".txt");
	//extractor.Print(ot);

	extractor.ReadObject(197);

	return 0;
}

