#include <iostream>
#include <filesystem>




using namespace std;

int main()
{
	


	filesystem::path dirPath = ".";
	for ( auto& list : filesystem::recursive_directory_iterator(dirPath)){
		
		std::cout << list.path().string() << "\n";	
	}


	return 0;
}