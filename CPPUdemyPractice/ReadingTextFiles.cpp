#include"ReadingTextFiles.h"

void ReadingTextFiles::readFile() {
	string filename = "test.txt";

	ifstream inFile;
	//can also use fstream, but then when using .open ios::in must be specified as a second parameter

	inFile.open(filename);

	if (inFile.is_open()) {
		string line;
		//inFile >> line; this way infile can be used the same as cin. will break on spaces though, not full lines
		while (!inFile.eof()) {//can also just say while(inFile) as the boolean operator has been overloaded for this
			getline(inFile, line);
			cout << "Read: " << line << endl;
		}
	}
	else {
		cout << "Could not open file: " << filename << endl;
	}

}