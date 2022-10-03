#include "Teacher.h"
#include "Person.h"
#include <iostream>
#include "Person.h"

using namespace std;
Teacher::Teacher()
{
	School = nullptr;
}

Teacher::Teacher(const char*n, const char* name1, int age1):Person(name1,age1)
{
	School = new char[strlen(n) + 1];
	strcpy_s(School, strlen(n) + 1, n);
}

Teacher::Teacher(const Teacher& obj)
{
	School = new char[strlen(obj.School) + 1];
	strcpy_s(School, strlen(obj.School) + 1, obj.School);

	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);

	age = obj.age;
}

Teacher& Teacher::operator=(const Teacher& obj)
{
	if (this == &obj) return *this;
	if (School != nullptr) delete[]School;
	School = new char[strlen(obj.School) + 1];
	strcpy_s(School, strlen(obj.School) + 1, obj.School);

	if (name != nullptr) delete[]name;
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);

	age = obj.age;

}

void Teacher::Print()
{
	Person::Print();
	cout << "School - " << School << endl;
}

Teacher::~Teacher()
{
	if (School != nullptr) delete[]School;
}
