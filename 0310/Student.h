#pragma once
#include "Person.h"
class Student : public Person
{
	char* Academy;
public:
	Student();
	Student(const char*,const char*,int);
	Student(const Student& obj);
	Student & operator=(const Student& obj);
	void Print(); // Переопределить в потомках!
	~Student();
	
};

