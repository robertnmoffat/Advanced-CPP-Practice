#include"OverloadingAssignmentOperator.h"

class Test3 {
private:
	int id;
	string name;
public:
	Test3(int id, string name) : id(id), name(name) {

	}

	bool operator<(const Test3 &other) const {
		return id < other.id;
	}

	void print() const {
		cout << id << " : " << name << endl;
	}

	//Overloaded = operator
	const Test3 &operator=(const Test3 &other){
		cout << "Using overloaded equals operator." << endl;

		id = other.id;
		name = other.name;

		return *this;//returns a copy of itself so that you can chain ='s like nested functions
	}

	Test3(const Test3 &other) {
		cout << "Copy contructor running." << endl;
		*this = other;
	}

	~Test3() {
		//clean up any pointers

		cout << "Destructor running..." << endl;
	}
};

OverloadingAssignmentOperator::OverloadingAssignmentOperator() {
	Test3 testBob(10, "Bob");
	Test3 test2(12, "not bob");

	test2.operator=(testBob);//this is the same as test2 = testBob

	test2.print();

	cout << "Testing overloaded copy constructor..." << endl;
	Test3 test3(test2);
	test3.print();

}