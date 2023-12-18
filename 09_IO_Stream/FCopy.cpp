#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cerr << "Parameter Error!\n";
		cerr << "Usage:\n";
		cerr << "\tfcopy source_filename destination_filename\n";
		return 1;	
	}
	cout << "Copying " << argv[1] << "to " << argv[2] << "...";
	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
	char ch;
	while(fin.get(ch))
		fout << ch;
	fout.close();
	fin.close();

	cout << "Finished.\n";
	return 0;
}
