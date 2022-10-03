#pragma once
#include "Person.h"
class Teacher : public Person
{
	char* School;
public:
	Teacher();
	Teacher(const char*, const char*, int);
	Teacher(const Teacher& obj);
	Teacher& operator=(const Teacher& obj);
	void Print(); // Переопределить в потомках!
	~Teacher();
};

