#include <iostream>
#include "Person.h"
#include "Librarian.h"

using namespace std;

string Librarian::registerBook(string Book)
{
	getBook(Book);
	cout << "Livro: " << Book <<" resgistrado !\n";
	showBook();
	return Book;
}

string Librarian::getBook(string newBook)
{	
	Book = newBook;
	return Book;
}

void Librarian::setBook(string newBook)
{
	Book = newBook;
}

void Librarian::showBook()
{
	cout << "Bibliotecario: " << getName() << " resgistrou o "<< "Livro " << Book << "\n";
}

void Librarian::showLibrarian()
{
	showData();
	cout << "Bibliotecario: " << getName();
}
