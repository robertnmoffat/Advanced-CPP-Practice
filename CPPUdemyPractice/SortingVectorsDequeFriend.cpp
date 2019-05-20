#include"SortingVectorsDequeFriend.h"

class Test {
private:
	int id;
	string name;
public:
	Test(int id, string name) : id(id), name(name) {

	}

	bool operator<(const Test &other) const {
		return id < other.id;
	}

	void print() const {
		cout << id << " : " << name << endl;
	}

	friend bool comp(const Test &a, const Test &b);//Declaring as a friend allows it to access private members
};

bool comp(const Test &a, const Test &b) {
	return a.name < b.name;//accesses private members, so must be declared friend inside of Test class
}

void SortingVectorsDequeFriend::sortingVectors() {
	vector<Test> tests;

	tests.push_back(Test(24, "Joe"));
	tests.push_back(Test(45, "Bill"));
	tests.push_back(Test(12, "Jim"));
	tests.push_back(Test(71, "Tim"));

	for (int i = 0; i < tests.size(); i++) {
		tests[i].print();
	}

	cout << "Sorting vector..." << endl;

	sort(tests.begin(), tests.end());//uses < operator to compare instances of Test class

	for (int i = 0; i < tests.size(); i++) {
		tests[i].print();
	}

	cout << "Sorting using comp function. sorting based on name." << endl;
	sort(tests.begin(), tests.end(), comp);//passes comp function as a specific comparator to use

	for (int i = 0; i < tests.size(); i++) {
		tests[i].print();
	}
}