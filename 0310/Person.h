#pragma once

class Person
{
protected:
	char* name;
	int age;
public:
	Person();
	Person(const char* , int);
	Person(const Person& obj);
	Person& operator=(const Person& obj);
	void Print(); // Переопределить в потомках!
	~Person();
};

