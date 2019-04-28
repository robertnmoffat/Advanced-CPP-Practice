#include"MapsPractice.h"

MapsPractice::MapsPractice() {
	map<string, int> numbers;

	numbers["One"] = 1;//Can enter values in the same way you might with an array
	numbers["Five"] = 5;
	numbers["Eleven"] = 11;

	string search = "Seven";
	if (numbers.find(search) != numbers.end()) {
		cout << "Found entry for " << search << " in map." << endl;
	}
	else {
		cout << "Did not find entry for " << search << " in map." << endl;
	}

	for (map<string, int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << it->first << " - " << it->second << endl;
	}
}

void MapsPractice::customMapObjects() {
	map<int, Person> people;

	people[5] = Person("John", 55);//creates blank entry and then shallow copies over instantiated person
	people[1] = Person("Bill", 42);
	people[9] = Person("jobin", 2);

	people.insert(make_pair(31, Person("Copy Person", 102)));//inserting a value that will force a call of the copy constructor so you can handle the copy in any way which you need

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		it->second.print();
	}
}

void MapsPractice::customObjectAsMapKey() {
	map<Person, int> people;

	people[Person("John", 55)] = 55;
	people[Person("Billis", 12)] = 58;
	people[Person("Yarm", 78)] = 101;
	people[Person("Billis", 1)] = 123;

	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
		it->first.print();
	}
}

void MapsPractice::multiMapPractice() {
	multimap<int, string> lookup;

	lookup.insert(make_pair(10, "Joe"));
	lookup.insert(make_pair(30, "Bab"));
	lookup.insert(make_pair(10, "Winnis"));
	lookup.insert(make_pair(50, "Crem"));

	for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++) {
		cout << it->first << " - " << it->second << endl;
	}

	cout << "Iterating through duplicate keys 10..." << endl;

	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> range = lookup.equal_range(10); //get a pair of two iterators which are the beginning and the end of the range which contains 10 as key

	for (multimap<int, string>::iterator it = range.first; it != range.second; it++) {
		cout << it->first << " - " << it->second << endl;
	}
}