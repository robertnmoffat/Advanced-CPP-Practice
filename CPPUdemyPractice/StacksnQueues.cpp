#include"StacksnQueues.h"

class Test2 {
private:
	string name;
public:
	Test2( string name) : name(name) {

	}

	~Test2() {
		cout << "Test2 object " << name << " destroyed." << endl;
	}

	void print() const {
		cout << name << endl;
	}
};

StacksnQueues::StacksnQueues(){
	//Last in first out
	stack<Test2> testStack;

	testStack.push(Test2("Joe"));
	testStack.push(Test2("Bob"));
	testStack.push(Test2("John"));
	testStack.push(Test2("Bill"));

	cout << "Checking top of stack..." << endl;

	Test2 top = testStack.top();
	top.print();

	cout << "Removing top of stack..." << endl;

	//Doesnt return anything, just pops off top item of the stack
	testStack.pop();
	
	cout << "Printing new top of stack..." << endl;

	top = testStack.top();
	top.print();

	cout << "-------------------------------------------------------------------" << endl;
	cout << endl << endl << "Now testing queue." << endl;
	queue<Test2> testQueue;

	testQueue.push(Test2("Joe"));
	testQueue.push(Test2("Bob"));
	testQueue.push(Test2("John"));
	testQueue.push(Test2("Bill"));

	cout << "Checking front of queue..." << endl;

	Test2 front = testQueue.front();
	front.print();

	cout << "Removing front of queue..." << endl;

	//Doesnt return anything, just pops off top item of the stack
	testQueue.pop();

	cout << "Printing new front of queue..." << endl;

	front = testQueue.front();
	front.print();
}