#include <iostream>

#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main() {

	Student person1("Oxford", "Tom", 100);
	Teacher teacher1("STEP", "Tom2", 25);


	person1.Print();

	teacher1.Print();



	Teacher teacher2(teacher1);


	cout << endl;
	teacher2.Print();

	Student person2 = person1;

	cout << endl;

	person2.Print();
	
	return 0;
}