#pragma once
#include <iostream>

using namespace std;

class Person
{	
	private:
		string Name;
		int CPF;
		int Register;

	public:

		Person() : Name(""), CPF(0), Register(0){}

		Person(string newName, int newCPF, int newRegister) :
			Name(newName), CPF(newCPF), Register(newRegister){}

		void accessSystem();

		string getName();
		int getCPF();
		int getRegister();
		
		string setName(string newName);
		int setCPF(int newCPF);
		int setRegister(int newRegister);

		void showData();

		void showAllData();

};

