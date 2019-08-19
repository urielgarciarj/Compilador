#ifndef LEX_H_INCLUDED
#define LEX_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <string>


using namespace std;

void analizarCadena(string cad);



void analizarCadena(string cad)
{
	int longCad = cad.size();

	for (int i = 0; i < longCad; i++)
	{
		switch (cad[i])
		{

			//LETRAS
		case 'a':
		case 'A':
		case 'b':
		case 'B':
		case 'c':
		case 'C':
		case 'd':
		case 'D':
		case 'e':
		case 'E':
		case 'f':
		case 'F':
		case 'g':
		case 'G':
		case 'h':
		case 'H':
		case 'i':
		case 'I':
		case 'j':
		case 'J':
		case 'k':
		case 'K':
		case 'l':
		case 'L':
		case 'm':
		case 'M':
		case 'n':
		case 'N':
		case 'ñ':
		case 'Ñ':
		case 'o':
		case 'O':
		case 'p':
		case 'P':
		case 'q':
		case 'Q':
		case 'r':
		case 'R':
		case 's':
		case 'S':
		case 't':
		case 'T':
		case 'u':
		case 'U':
		case 'v':
		case 'V':
		case 'w':
		case 'W':
		case 'x':
		case 'X':
		case 'y':
		case 'Y':
		case 'z':
		case 'Z':
			cout << endl << "Es una letra...";
			break;


			//NUMEROS
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			cout << endl << "Es un numero...";
			break;


			//OPERADORES ARITMETICOS
		case '+':
			if (cad[i + 1] == '+')
			{
				cout << endl << "Es un operador de incremento ...";
				i++;
			}
			else if (cad[i + 1] == '=')
			{
				cout << endl << "Es un operador de asignacion suma ...";
				i++;
			}
			else
				cout << endl << "Es un operador de suma...";
			break;
		case '-':
			if (cad[i + 1] == '-')
			{
				cout << endl << "Es un operador de decremento ...";
				i++;
			}
			else if (cad[i + 1] == '=')
			{
				cout << endl << "Es un operador de asignacion resta ...";
				i++;
			}
			else
				cout << endl << "Es un operador de resta...";
			break;
		case '*':
			if (cad[i + 1] == '=')
			{
				cout << endl << "Es un operador de asignacion multiplicacion ...";
				i++;
			}
			else
				cout << endl << "Es un operador de multiplicacion...";
			break;
		case '/':
			if (cad[i + 1] == '=')
			{
				cout << endl << "Es un operador de asignacion division ...";
				i++;
			}
			else
				cout << endl << "Es un operador de division...";
			break;
		case '%':
			if (cad[i + 1] == '=')
			{
				cout << endl << "Es un operador de asignacion modulo ...";
				i++;
			}
			else
				cout << endl << "Es un operador de modulo...";
			break;

			//OPERADORES DE ASIGNACION

		case '=':
			if (cad[i + 1] == '=')
			{
				cout << endl << "Es una comparacion de igualdad ...";
				i++;
			}
			else
				cout << endl << "Es un operador de asignacion directa...";
			break;



			//OPERADORES LOGICOS

		case '&':
			if (cad[i + 1] == '&')
			{
				cout << endl << "Es un operador de AND ...";
				i++;
			}
			else
				cout << endl << "Es un caracter especial...";
			break;

		case '|':
			if (cad[i + 1] == '|')
			{
				cout << endl << "Es un operador de OR ...";
				i++;
			}
			else
				cout << endl << "Es un caracter especial...";
			break;

		case '!':
			cout << endl << "Es un operador de NOT ...";
			break;




			//COMPARADORES
		case '>':
			if (cad[i + 1] == '=')
			{
				cout << endl << "Es un comparador mayor igual que ...";
				i++;
			}
			else
				cout << endl << "Es un comparador mayor que...";
			break;

		case '<':
			if (cad[i + 1] == '=')
			{
				cout << endl << "Es un comparador menor igual que ...";
				i++;
			}
			else
				cout << endl << "Es un comparador menor que...";
			break;



			//DELIMITADORES
		case '{':
			cout << endl << "Es una llave abierta ...";
			break;

		case '}':
			cout << endl << "Es una llave cerrada ...";
			break;

		case '(':
			cout << endl << "Es una parentesis abierto ...";
			break;

		case ')':
			cout << endl << "Es una parentesis cerrado ...";
			break;

			// ESPACIO
		case ' ':
			cout << endl << "Es un espacio ...";
			while (cad[i + 1] == ' ') {
				i++;

			}


			break;

			//CARACTERES ESPECIALES

		case '_':
			cout << endl << "Es un caracter especial ...";
			break;

		case '$':
			cout << endl << "Es un caracter especial ...";
			break;

		case '#':
			cout << endl << "Es un caracter especial ...";
			break;

		case '"':
			cout << endl << "Es un caracter especial ...";
			break;

		case '?':
			cout << endl << "Es un caracter especial ...";
			break;

		case '.':
			cout << endl << "Es un caracter especial ...";
			break;

		case ',':
			cout << endl << "Es un caracter especial ...";
			break;

		case ';':
			cout << endl << "Es un caracter especial ...";
			break;

		case ':':
			cout << endl << "Es un caracter especial ...";
			break;


		default:
			cout << endl << "Es una caracter no registrado ...";
			break;

		}


	}


}


#endif // LEX_H_INCLUDED
