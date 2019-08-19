#include <iostream>
#include <stdio.h>
#include <string>


#include "lex.h"

using namespace std;

int main()
{
	string cad;
	cout << "Ingresa una cadena: " << endl;
	getline(cin, cad);
	analizarCadena(cad);
	return 0;
}
