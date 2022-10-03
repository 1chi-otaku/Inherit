#include "Person.h"
#include <iostream>
#include "Student.h"
#include "Teacher.h"
using namespace std;

Person::Person()
{
	name = nullptr;
	age = 0;
}

Person::Person(const char* n, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1,n);

	age = a;
}

Person::Person(const Person& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	age = obj.age;
}
Person& Person::operator=(const Person& obj)
{
	if (this == &obj) return *this;
	if (name != nullptr) delete[]name;
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	age = obj.age;

	return *this;

	
}
void Person::Print()
{
	cout << "Name - " << name << endl;
	cout << "Age - " << age << endl;
}

Person::~Person()
{
	if (name != nullptr)delete[]name;
}
