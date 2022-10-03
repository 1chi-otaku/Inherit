#include "Student.h"
#include <iostream>
#include "Person.h"
using namespace std;

Student::Student()
{
	Academy = nullptr;
}

Student::Student(const char* n, const char* name1, int age1) :Person(name1, age1)
{
	Academy = new char[strlen(n) + 1];
	strcpy_s(Academy, strlen(n) + 1, n);
}

Student::Student(const Student& obj)
{
	Academy = new char[strlen(obj.Academy) + 1];
	strcpy_s(Academy, strlen(obj.Academy) + 1, obj.Academy);
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);

	age = obj.age;
}

Student& Student::operator=(const Student& obj)
{
	if (this == &obj) return *this;
	if (Academy != nullptr) delete[]Academy;
	Academy = new char[strlen(obj.Academy) + 1];
	strcpy_s(Academy, strlen(obj.Academy) + 1, obj.Academy);

	if (name != nullptr) delete[]name;
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);

	age = obj.age;
	return *this;
}

void Student::Print()
{
	Person::Print();
	cout << "Academy - " << Academy << endl;
}

Student::~Student()
{
	if (Academy != nullptr)delete[]Academy;
}
