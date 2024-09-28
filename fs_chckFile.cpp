#include <iostream>
#include <filesystem>


using namespace std;
using namespace std::filesystem;

int main(){

	std::cout << " tes file system " << std::endl;	

	path dir = "ouput.txt";

	cout << "==========PRINTING FILES=============" << endl;


	std::system("dir");


	cout << "=====================================" << endl;



	if (filesystem::exists(dir))
	{
		cout << "File Exist\n";
	}else{
		cout << "File " << dir.string() <<" does not exist" << endl;
	}

    return 0;
}