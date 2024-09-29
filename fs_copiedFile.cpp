#include <iostream>
#include <filesystem>



using namespace std;
void printList(){
	cout << "===============printing Files and Dir=============" << endl;
	system("dir");
	cout << "==================================================" << endl;
}



int main(int argc, char const *argv[])
{



	std::filesystem::path source = "new.txt";
	std::filesystem::path dest = "copy_of_new.txt";	

	printList();
	try{

		filesystem::copy(source, dest);

		cout << "successfully copy!" << endl;




	}catch (filesystem::filesystem_error& e){

		cout << e.what();

	}

	printList();


	return 0;
}