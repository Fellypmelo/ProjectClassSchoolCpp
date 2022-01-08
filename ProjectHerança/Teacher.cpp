#include "Teacher.h"

void Teacher::effectSchedule()
{
	cout << "Professor: " << getName() << " \nDepartamento: " << getDepartment() << "\n";
	cout << "Entregou a Pauta !\n";

}

void Teacher::deliverCall()
{
	cout << "Chamada em sala de aula realizada !\n";
}

string Teacher::getDepartment()
{
	return Department;
}

void Teacher::setDepartment(string newDepartment)
{
	Department = newDepartment;
}

void Teacher::showDepartment()
{
	showData();
	cout << "Professor: " << getName() << " \nDepartamento: " << getDepartment() << "\n";
}
