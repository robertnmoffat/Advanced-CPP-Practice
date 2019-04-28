#include"SetsPractice.h"

class Test {
private:
	int id;
	string name;
public:
	Test(int id, string name) : id(id), name(name) {

	}

	bool operator<(const Test &other) const{
		return id < other.id;
	}

	void print() const{
		cout << id << " : " << name << endl;
	}
};

void SetsPractice::tryitout() {
	set<int> numbers;

	numbers.insert(5);
	numbers.insert(19);
	numbers.insert(3);
	numbers.insert(15);

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}

	//Two different ways to search for a value in a set:
	set<int>::iterator it = numbers.find(3);
	if (it != numbers.end()) {
		cout << "Found number: " << *it << endl;
	}

	//or

	if(numbers.count(3)){
		cout << "Found number." << endl;
	}

	//Using set of custom object
	set<Test> tests;
	tests.insert(Test(5, "Bab"));
	tests.insert(Test(15, "Dole"));
	tests.insert(Test(3, "Leb"));

	for (set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
		it->print();
	}
}