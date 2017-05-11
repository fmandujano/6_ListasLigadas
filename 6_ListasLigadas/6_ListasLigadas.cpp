// 6_ListasLigadas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LLCD.h"

int main()
{
	LLCD *lista = new LLCD();
	lista->insertString("hola");
	//lista->print();
	lista->insertString("mundo");
	//lista->print();
	lista->insertString("esto");
	lista->insertString("es");
	lista->insertString("una");
	lista->insertString("lista");
	lista->insertString("ligada");
	lista->insertString("doble");
	lista->print();
	std::cout << "removiendo item en el header " << std::endl;
	lista->remove();
	lista->print();

	lista->prev();
	lista->prev();
	lista->prev();
	lista->print();

	system("PAUSE");
    return 0;
}

