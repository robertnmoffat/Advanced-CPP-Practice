#pragma once
#include<iostream>
#include<exception>

using namespace std;

class MyCustomException: public std::exception {
private:

public:
	virtual const char* what() const throw();

};