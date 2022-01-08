#include <iostream>
#include "Person.h"

using namespace std;

void Person::accessSystem()
{
	cout << "Acesso ao sistema concedido !\n";
}

string Person::getName()
{
	return Name;
}

int Person::getCPF()
{
	return CPF;
}

int Person::getRegister()
{
	return Register;
}

string Person::setName(string newName)
{
	return Name = newName;
}

int Person::setCPF(int newCPF)
{
	return CPF = newCPF;
}

int Person::setRegister(int newRegister)
{
	return Register = newRegister;
}

void Person::showData()
{
	cout << "\_____DADOS_____\n";
	cout << "Nome: " << getName() << "\n";
	cout << "CPF: " << getCPF() << "\n";
	cout << "Registro: " << getRegister() << "\n";
}

