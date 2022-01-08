#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

void Student::takeTest()
{	
	showCourse();
	cout << "Efetuou a Prova !\n";
}

string Student::getCourse()
{
	return Course;
}

void Student::setCourse(string newCourse)
{
	Course = newCourse;
}

void Student::showCourse()
{
	showData();
	cout << "Aluno do Curso: " << getCourse() << "\n";
}
