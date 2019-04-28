#include"StructsAndPadding.h"
#include"ReadingAndWritingBinaryFiles.h"

void ReadingAndWritingBinaryFiles::writeBinaryFile() {
	string filename = "test.bin";//.bin to represent that it is binary

	PaddedPerson testPerson = { "Gill", 29, 110 };

	ofstream outputFile;
	outputFile.open(filename, ios::binary);

	if (outputFile.is_open()) {
		cout << "Writing struct to binary file: " << testPerson.name << ", " << testPerson.age << ", " << testPerson.weight << "..." << endl;
		outputFile.write((char *)(&testPerson), sizeof(PaddedPerson));//requires a pointer from which to start writing data. data must be in the form of chars, so must be casted as a char pointer
		cout << "File written successfully!" << endl;
	}
	else {
		cout << "Failed to open file: " << filename << endl;
	}

	outputFile.close();


}

void ReadingAndWritingBinaryFiles::readBinaryFile() {
	string filename = "test.bin";//.bin to represent that it is binary

	PaddedPerson readPerson = {};

	ifstream inputFile;
	inputFile.open(filename, ios::binary);

	if (inputFile.is_open()) {
		try {
			cout << "Attempting to read binary file..." << endl;
			inputFile.read((char *)(&readPerson), sizeof(PaddedPerson));//requires a pointer from which to start writing data. data must be in the form of chars, so must be casted as a char pointer
			cout << "File read successfully!" << endl;
		}
		catch (exception e) {
			cout << "Caught exception: " << e.what() << endl;
		}
	}
	else {
		cout << "Failed to open file: " << filename << endl;
	}

	inputFile.close();

	cout << "Contents of file read: " << readPerson.name << ", " << readPerson.age << ", " << readPerson.weight << endl;

}