#include"VectorPractice.h"

void VectorPractice::iteratorPractice() {
	vector<string> strings;
	strings.push_back("One");
	strings.push_back("Two");
	strings.push_back("Three");
	strings.push_back("Four");
	strings.push_back("Five");

	cout << "Iterate through vector using normal array style navigation." << endl;

	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << endl;
	}

	cout << endl << "Iterate through vector using iterator" << endl;

	vector<string>::iterator it = strings.begin();//Creates an iterator which is similar to a pointer at the beginning of the strings vector
	
	for (it; it != strings.end(); it++) {
		cout << *it << endl;
	}

	cout << "Enter integer position of vector to print (vector size = " << strings.size() << "): ";
	int num;
	cin >> num;
	if (num > strings.size())
		cout << "Too high." << endl;
	else
		cout << "Value at position " << num << " equals: " << strings[num] << endl;

	
}

void VectorPractice::vectorsAndMemory() {
	vector<double> numbers(0);
	int capacity = numbers.capacity();

	cout << "Vector size: " << numbers.size() << endl;

	cout << "Vector capacity: " << capacity << endl;

	for (int i = 0; i < 1000; i++) {
		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity changed to: " << capacity << endl;
		}

		numbers.push_back(i);
	}

	//Size is basically what can be referenced in the vector, or what has been used, and capacity is how much memory has been allocated for storage
	cout << "Vector size: " << numbers.size() << endl;
	cout << "Vector capacity: " << capacity << endl;
}

void VectorPractice::twoDimensionalVectors() {
	//initializes a 2 dimensional vector with 4 rows and 5 columns
	vector< vector<int> > grid(12, vector<int>(12));

	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++) {
			cout << grid[row][col] << flush;
		}

		cout << endl;
	}
}