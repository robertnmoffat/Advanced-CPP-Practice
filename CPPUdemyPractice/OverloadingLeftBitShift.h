#pragma once
#include<iostream>
#include<string>

using namespace std;

class Test4 {
private:
	int id;
	string name;
public:
	Test4(int id, string name):name(name), id(id) {	
	}

	friend ostream &operator<<(ostream &out, Test4 &test) {
		out << test.id << " : " << test.name;
		return out;
	}
};

class OverloadingLeftBitShift {
private:

public:
	OverloadingLeftBitShift();
};