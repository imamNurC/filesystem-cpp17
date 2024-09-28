#include <iostream>
#include <filesystem>
#include <cassert>

using namespace std;
using namespace filesystem;
void printPath(){


	cout << "===============printing Files and Dir=============" << endl;
	system("dir");
	cout << "==================================================" << endl;

}

int main(int argc, char const *argv[])
{
	
	printPath();


	filesystem::path dirPath = "new_dir" ;


	if (create_directory(dirPath)){
		cout << "directory " << dirPath.string() << "created succesfully" << endl;
	} else { cout << "failed to create directory" << endl; }



	return 0;
}