#include"Exceptions\CustomExceptions.h"
#include"Exceptions\MyCustomException.h"

void CustomExceptions::testMyCustomException() {
	try {
		throw (MyCustomException());
	}
	catch (MyCustomException &e) {
		cout << "Exception caught: " << e.what() << endl;
	}
}