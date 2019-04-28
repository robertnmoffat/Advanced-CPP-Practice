#include"ListPractice.h"

void ListPractice::listTests() {
	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	
	numbers.push_front(0);//adds value to the front of the list. is just as efficient as push_back since it is a linked list and does not need to be shifted forward

	list<int>::iterator it = numbers.begin();
	it++;
	cout << "Value at position prior to insertion: " << *it << endl;
	numbers.insert(it, 100);//inserts 100 that that it will be at the current position, 1, and then increments the iterator by 1 so that it is on the same element that it was prior to insertion
	cout << "Inserted 100, and moved iterator forward one. should be at same value as prior to insertion." << endl;
	cout << "Value at position post insertion: " << *it << endl;

	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;
	cout << "Element to be erased: " << *eraseIt << endl;
	eraseIt = numbers.erase(eraseIt);
	cout << "Element after erase: " << *eraseIt << endl;

	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {//list iterators can only be incremented one at a time because of it being a linked list
		cout << *it << endl;
	}
}