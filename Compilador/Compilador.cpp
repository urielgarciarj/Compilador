#include <iostream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

#include "lex.h"
using namespace std;






int main()

{

	string cad;
	bool salir = false;


	do
	{
		system("cls");
		cout << endl << "Ingresa una cadena: " << endl;
		getline(cin, cad);
		analizarCadena(cad);
		getchar();

	} while (salir == false);
	return 0;
}


