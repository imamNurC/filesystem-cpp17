#include <iostream>
#include <filesystem>




using namespace std;
int main(int argc, char const *argv[])
{
	
 	filesystem::path file = "input.txt";


 	if (filesystem::exists(file)){
 		auto size = filesystem::file_size(file);

 		cout << "File size : " << size <<  " bytes" << endl;
 	}else { 

 		cout << "File does not exist " << endl;
 	}


	return 0;
}