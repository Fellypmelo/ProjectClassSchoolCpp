#pragma once
#include <iostream>
#include "Person.h"



class Librarian : public Person
{
    private:
		string Book;
	public:
		Librarian() {}
		Librarian(string newName, int newCPF, int newRegister) :
			Person(newName, newCPF, newRegister){}
	 

		string getBook(string newBook);
		
		void setBook(string newBook);

		string registerBook(string Book);

		void showBook();

		void showLibrarian();
};

