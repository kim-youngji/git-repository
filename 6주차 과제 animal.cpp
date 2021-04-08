#include <iostream>
using namespace std;
class Animal {
public:
	Animal() {
		cout << "constructor for animal activated\n";
	}
	virtual void Cry() = 0;
	~Animal() {
		cout << "constructor for Animal activated\n";
	}

};
class Dog : public Animal {
public:
	Dog() {
		cout << "constructor for Dog activated\n";
	}
	virtual void Cry() {
		cout << "멍멍\n"; return;
	}
	~Dog() {
		cout << "destructor for Dog activatied\n";
	}
};
class Bird : public Animal {
public:
	Bird() {
		cout << "constructor for Bird activated\n";
	}
	virtual void Cry() {
		cout << "짹짹\n"; return;
	}
	~Bird() {
		cout << "destructor for Bird activated\n";
	}
};
class Cat : public Animal {
public:
	Cat() {
		cout << "constructor for Cat activated\n";
	}
	virtual void Cry() {
		cout << "야옹야옹\n"; return;
	}
	~Cat() {
		cout << "destructor for Cat activated\n";
	}
};
int main()
{
	Animal* arr[6];
	arr[0] = new Dog;
	arr[1] = new Dog;
	arr[2] = new Bird;
	arr[3] = new Bird;
	arr[4] = new Cat;
	arr[5] = new Cat;
	Animal* Animal_pointer = *arr;
	Animal_pointer->cry();
	Animal_pointer = *(arr + 1);
	Animal_pointer->cry();
	Animal_pointer = *(arr + 2);
	Animal_pointer->cry();
	Animal_pointer = *(arr + 3);
	Animal_pointer->cry();
	Animal_pointer = *(arr + 4);
	Animal_pointer->cry();
	Animal_pointer = *(arr + 5);
	Animal_pointer->cry();


	return 0;

	;