#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "Librarian.h"
#include <locale>

using namespace std;

int main() {

	cout << "\n_____________________CONSULTAS________________________________\n";

	setlocale(LC_ALL, "portuguese");

	Teacher Teacher01("Pedro",12345,54321,"Tecnologia");
	Student Student01("Felipe", 12235, 54354, "Ciencia da Computaçao");
	Librarian Librarian01("Lucas", 34523, 44323);

	//metodo de todos
	Teacher01.accessSystem();
	Student01.accessSystem();
	Librarian01.accessSystem();

	//metodos Teacher exclusivos
	Teacher01.effectSchedule();
	Teacher01.deliverCall();

	//metodos Student exclusivos
	Student01.takeTest();

	//metodos Librarian exclusivos
	Librarian01.registerBook("Codigo Limpo");

	//show dados
	Teacher01.showDepartment();
	Student01.showCourse();
	Librarian01.showLibrarian();

	cout << "\n\n";
	//show dados
	Teacher01.showData();
	Student01.showData();
	Librarian01.showData();


	cout << "\n\n";
	system("Pause");
	return 0;
}