#pragma once
#include<iostream>
#include<string>
using namespace std;

struct Person {
	char name[50];
	int age;
	double weight;
};

#pragma pack(push,1)//Preprocessor directive that does something unclear with a stack and aligns on bit boundaries of 1. must be less than the padding which is 2 or it won't do anything.

struct PaddedPerson {
	char name[50];
	int age;
	double weight;
};

#pragma pack(pop)//Undoes the previous preprocessor directive so that it does not apply to anything after this

class StructsAndPadding {
private:

public:
	static void checkStructPadding();
};
