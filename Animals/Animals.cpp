#include <iostream>

using namespace std;

class Animal {
private:
	string name;

public:
	//Creating a constructor for the Animal class:
	Animal() { cout << "Animal created." << endl; };
	//Creating the copy constructor for the Animal class. It is necessary to define the fields of the class:
	Animal(const Animal& other) : 
		name(other.name) { 
		cout << "Animal created by copying," << endl; 
	};

	// Adding the destructor 
	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) { 
		this->name = name; 
	};
	
	void speak() const { 
		cout << "My name is: " << name << endl; 
	}
};

int main() {

	// Creating an Animal object
	Animal animal1;
	animal1.setName("Freddy");

	// Creating a second Animal object based on the first Animal created avoids using the constructor defined on line 11.
	// What is happening is that we are using the "Copy constructor".
	Animal animal2 = animal1;
	// If no fields are declared in the copy constructor, calling this method would return a blank name.
	animal2.speak();
	animal2.setName("Bob");
	
	animal1.speak();
	animal2.speak();

	Animal animal3(animal1);
	animal3.speak();

	return 0;
}