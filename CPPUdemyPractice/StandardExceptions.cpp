#include"Exceptions\StandardExceptions.h"

void StandardExceptions::memoryAllocationError() {
	char *pMemory = new char[9999999];
	delete[] pMemory;
}

void StandardExceptions::testStandardExceptions() {
	try {
		StandardExceptions::memoryAllocationError();
	}
	catch (bad_alloc &e) {//base class is exception. can call .what() on it
		cout << "Exception caught: " << e.what() << endl;
	}
}