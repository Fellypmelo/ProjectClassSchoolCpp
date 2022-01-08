#pragma once
#include <iostream>
#include "Person.h"

class Student : public Person
{
	private:
		string Course;
	public:
		Student(){}
		Student(string newName, int newCPF, int newRegister, string newCourse) :
			Person(newName, newCPF, newRegister), Course(newCourse) {}

		void takeTest();

		string getCourse();

		void setCourse(string newCourse);

		void showCourse();
};

