#include <iostream>

using namespace std;

class Animal {
private:
	string name;

public:
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; }

};

int main() {

	const double PI = 3.141592;
	cout << PI << endl;

	/*Animal animal;
	animal.setName("Freddy");
	animal.speak();*/

	int value = 8;

	// Creating a pointer thet points to the memory location of value (that is 8)
	int* pValue = &value;

	// Printing pValue would return the memory location.
	// For that reason, we dereference pValue using *pValue.
	cout << *pValue << endl;

	int number = 11;
	// Changing the memory location that pValue is pointing to the memory location of number variable.
	pValue = &number;

	// Printing the value contained in the pointer (11).
	cout << *pValue << endl;

	return 0;
}