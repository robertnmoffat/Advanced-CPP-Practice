#include"MyCustomException.h"


const char* MyCustomException::what() const throw() {
	return "My custom exception has been thrown!";
}