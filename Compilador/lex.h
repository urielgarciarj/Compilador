#ifndef LEX_H_INCLUDED
#define LEX_H_INCLUDED

#include <iostream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;



void analizarCadena(string cad);




void analizarCadena(string cad)
{
	const int NUM_PALABRAS_RESERVADAS = 17;


	string palabrasReservadas[NUM_PALABRAS_RESERVADAS] = { "if", "for", "while", "do", "switch", "case", "break", "default", "int", "char", "float", "double", "string", "bool", "include", "using", "namespace" };

	int i = 0, cont = 0, j = 0;
	int longCad = cad.size();
	bool acep = true, encontroPalabraReservada = false;


	
		switch (cad[i])
		{
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
		case '_a':

			for (j = 0; j < NUM_PALABRAS_RESERVADAS; j++)
			{

				if (cad.compare(palabrasReservadas[j]) == 0)
				{
					cout << endl << "Es una palabra reservada" << endl;
					encontroPalabraReservada = true;
					break;
				}
			}

			if (encontroPalabraReservada) {
				break;
			}
			i++;
			while ((cad[i] >= '0' && cad[i] <= '9' && i < longCad) || (cad[i] >= 'a' && cad[i] <= 'z'))
			{
				i++;
			}
			if (cad[i] == '+' || cad[i] == '-' || cad[i] == '*' || cad[i] == '/' || cad[i] == '%' || cad[i] == '.' || cad[i] == ',')
			{
				acep = false;
				break;
			}
			cout << endl << "Es un identificador...";
			break;


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
			acep = true;
			cont++;
			i++;
			while ((cad[i] >= '0' && cad[i] <= '9' && i < longCad))
			{
				i++;
				cont++;
			}
			if (cad[i] == '+' || cad[i] == '-' || cad[i] == '*' || cad[i] == '/' || cad[i] == '%' || cad[i] == '.' || cad[i] == ',' || (cad[i] >= 'a' && cad[i] <= 'z'))
			{
				acep = false;
				break;
			}


			cout << endl << "Es un digito de " << cont << " digitos...";
			break;

		case '+':
			if (cad[i + 1] == '+')
			{
				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de incremento ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}
			}
			else if (cad[i + 1] == '=')
			{
				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de asignacion con suma ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}
			}
			else if (cad[i + 1] == '\0')
			{
				cout << endl << "Es un operador de suma...";
			}
			else
			{
				cout << endl << "qE...";
				acep = false;
			}
			break;
		case '-':
			if (cad[i + 1] == '-')
			{
				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de asignacion con resta ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}
			}
			else if (cad[i + 1] == '=')
			{
				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de asignacion con resta ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}
			}
			else if (cad[i + 1] == '\0')
			{
				cout << endl << "Es un operador de resta...";
			}
			else
			{
				cout << endl << "qE...";
				acep = false;
			}
			break;
		case '*':
			if (cad[i + 1] == '=')
			{
				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de asignacion con multiplicacion ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}
			}

			else if (cad[i + 1] == '\0')
			{
				cout << endl << "Es un operador de multiplicacion...";
			}
			else
			{
				cout << endl << "qE...";
				acep = false;
			}
			break;
		case '/':
			if (cad[i + 1] == '=')
			{
				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de asignacion con division ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}
			}
			else
				cout << endl << "Es un operador de division...";
			break;
		case '%':
			if (cad[i + 1] == '=')
			{
				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de asignacion con Modulo  ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}
			}
			else
				cout << endl << "Es un operador de modulo...";
			break;

			//OPERADORES DE ASIGNACION

		case '=':
			if (cad[i + 1] == '=')
			{
				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de Igualdad ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}
			}
			else
				cout << endl << "Es un operador de asignacion directa...";
			break;



			//OPERADORES LOGICOS

		case '&':
			if (cad[i + 1] == '&')
			{
				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de AND ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}
			}
			else
				cout << endl << "Es un caracter especial...";
			break;

		case '|':
			if (cad[i + 1] == '|')
			{

				i++;
				if (cad[i + 1] == '\0')
				{
					cout << endl << "Es un operador de OR ...";
				}
				else
				{
					cout << endl << "qE...";
					acep = false;
				}


			}
			else
				cout << endl << "Es un caracter especial...";
			break;

		case '!':
			if (cad[i + 1] == '\0')
			{

				cout << endl << "Es un operador de NOT ...";
			}
			else
			{
				cout << endl << "qE...";
				acep = false;
			}

			break;




			//COMPARADORES
		case '>':
			if (cad[i + 1] == '=')
			{
				cout << endl << "Es un comparador mayor igual que ...";
				i++;
			}
			else if (cad[i + 1] == '\0')
			{
				cout << endl << "Es un comparador mayor que...";

			}

			else
			{
				cout << endl << "qE...";
				acep = false;
			}
			break;

		case '<':
			if (cad[i + 1] == '=')
			{
				cout << endl << "Es un comparador menor igual que ...";
				i++;
			}
			else if (cad[i + 1] == '\0')
			{

				cout << endl << "Es un comparador menor que...";
			}
			else
			{
				cout << endl << "qE...";
				acep = false;
			}

			break;



			///DELIMITADORES----------------------------------------------
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


			///CARACTERES ESPECIALES----------------------------------------------------
		case '_':
			i++;
				if (isalpha(cad[i])) {
					cout << "es un identificador" << endl;
					break;
				}
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

			///ESPACIO-----------------------------------------------------------
		case ' ':
			cout << endl << "Es un espacio ...";
			while (cad[i + 1] == ' ') {
				i++;

			}


			break;

		default:
			cout << endl << "Es una caracter no registrado ...";
			break;

		}
	

		if (acep)
		{
			cout << endl << endl << "FINALIZO CON EXITO";
		}
		else
		{
			cout << endl << endl << "ERROR";
		}


	}


void generarPalabrasReservadas(string palabrasReservadas[20])
{
	palabrasReservadas[0] = "if";


}





#endif // LEX_H_INCLUDED

