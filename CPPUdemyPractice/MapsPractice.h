#pragma once
#include<iostream>
#include<map>
#include<string>

using namespace std;

class Person {
private:
	string name;
	int age;

public:

	Person() : name(""), age(0) {}

	Person(string name, int age) : name(name), age(age) {}

	Person(const Person& other) {
		cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	bool operator<(const Person &other) const {
		if (name == other.name)
			return age < other.age;
		return name < other.name;
	}

	void print() const {
		cout << name << ": " << age << endl;
	}
};

class MapsPractice {
private:

public:
	MapsPractice();
	static void customMapObjects();
	static void customObjectAsMapKey();
	static void multiMapPractice();
};