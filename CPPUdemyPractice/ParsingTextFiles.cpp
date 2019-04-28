#include"ParsingTextFiles.h"

void ParsingTextFiles::parseText() {
	string filename = "stats.txt";

	ifstream inFile;
	inFile.open(filename);

	if (!inFile.is_open()) {
		cout << "Failed to open file: " << filename << endl;
		return;
	}

	while (inFile) {
		string line;
		
		getline(inFile, line, ':');
		
		int population;
		inFile >> population;

		inFile >> ws;
		if (!inFile)
			break;

		cout << line << "---" << population << endl;
	}

	inFile.close();
}