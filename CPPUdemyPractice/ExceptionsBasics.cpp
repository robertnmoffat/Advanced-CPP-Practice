#include"Exceptions\ExceptionsBasics.h"


void ExceptionBasics::throwException() {
	throw 7;
	throw "test throw!";
	throw string("test string throw!");
}

void ExceptionBasics::testExceptionThrowAndCatch() {
	try {
		ExceptionBasics::throwException();
	}
	catch (int e) {
		cout << "Caught int exception: " << e << endl;
	}
	catch (char const* e) {
		cout << "Caught char const* exception: " << e << endl;
	}
	catch (string &e) {
		cout << "Caught string exception: " << e << endl;
	}

	cout << "Made it to end of exception testing without crash." << endl;
}