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



	std::filesystem::path oldName = "input.txt";
	std::filesystem::path newName = "new.txt";
	


	try{

		printList();
		

		filesystem::rename(oldName, newName);

		cout << "successfully rename!" << endl;


		printList();


	}catch (filesystem::filesystem_error& e){

		cout << e.what();

	}

	return 0;
}