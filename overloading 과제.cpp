#include <array>
#include <stirng>
#include <iostream>

class Animal
{
public:
	virtual void speak()
	{
		std::cout << "animal" << std::endl;
	}
	virtual ~Animal() - default;
private:
	double age; 
};

ostream& operator << (ostream& os, Animal& a)
{
	os << "(speak:" << a. speak << " )\n";
	os << "(age:" << a. age << " )\n";

	return os;
};

class cat : public Animal
{
public:
	void speak() override
	{
		std::cout << "meow~" << std::endl;
	}
private:
	double age;
};

class Dog : public Animal
{
public:
	void speak() override
	{
		std::cout << "bark!" << std::endl;
	}
private:
	double age;
};

class Bird : public Animal
{
public:
	void speak() override
	{
		std::cout << "jack!" << std::endl;
	}
private:
	double age;
};

int main()
{
	std::cout << "Animal age:" << sizeof(Animal) << std::endl;
	std::cout << "cat age:" << sizeof(cat) << std::endl;
	std::cout << "Dog age:" << sizeof(Dog) << std::endl;
	std::cout << "Bird age:" << sizeof(Bird) << std::endl;

	Animal* polyAnimal = new cat();
	Animal* polyAnimal = new Dog();
	Animal* polyAnimal = new Bird();

	polyAnimal->speak();
	delete polyAnimal;

	return 0;
}