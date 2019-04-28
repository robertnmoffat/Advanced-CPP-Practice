#include"StructsAndPadding.h"

void StructsAndPadding::checkStructPadding() {
	Person person = {"Gill", 29, 110};

	cout << "Estimated size: " << (sizeof(char) * 50 + sizeof(int) + sizeof(double)) << endl;
	cout << "Actual size: " << sizeof(person) << endl;
	cout << "Size of a packed struct: " << sizeof(PaddedPerson) << endl;
}