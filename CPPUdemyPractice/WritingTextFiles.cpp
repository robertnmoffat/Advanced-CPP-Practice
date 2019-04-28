#include"WritingTextFiles.h"

void WritingTextFiles::writeToFile() {
	string filename = "test.txt";

	ofstream outputFileStream;//specifically stated as output, so you do not have to specify stream type later
	fstream fileStream;//unspecified as input or output, so will need to be explicitly stated later

	outputFileStream.open(filename);//opens the filestream on "test.txt"
	//fileStream.open(filename, ios::out); when using unexplicit stream a second parameter is required to specify the whether input or output

	if (outputFileStream.is_open()) {
		for (int i = 0; i < 5; i++)
			outputFileStream << i << endl;

		outputFileStream << "test text to be written to file" << endl;//Once open, stream can be written to in the same manner as cout
		outputFileStream << "second line of test text to be written";
		outputFileStream.close();//Make sure to close the stream once you are finished writing to it
	}
	else {
		cout << "Could not create file: " << filename << endl;
	}
}