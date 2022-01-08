#pragma once
#include <iostream>
#include "Person.h"

class Teacher : public Person
{
	private:
		string Department;
	public:
		Teacher(){}

		Teacher(string newName, int newCPF, int newRegister,string newDepartment) :
			Person(newName,newCPF,newRegister),Department(newDepartment){}
		
		void effectSchedule();
		void deliverCall();

		string getDepartment();

		void setDepartment(string newDepartment);
		

		void showDepartment();

};

