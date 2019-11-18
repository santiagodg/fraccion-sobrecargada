#include <iostream>
#include "Fraccion.h"
using namespace std;

int main()
{
	int iNumerador, iDenominador;
	char cOpcion;

	Fraccion fraccion1;

	cout << "FRACCION" << endl;
	cout << "Ingrese el numerador: ";
	cin >> iNumerador;
	cout << "Ingrese el denominador: ";
	cin >> iDenominador;

	Fraccion fraccion2(iNumerador, iDenominador);

	do
	{
		cout << "MENU" << endl;
		cout << "a) Suma fracciones" << endl;
		cout << "b) Resta fracciones" << endl;
		cout << "c) Multiplica fracciones" << endl;
		cout << "d) Divide fracciones" << endl;
		cout << "e) Actualiza los valores de la fraccion 1" << endl;
		cout << "f) Actualiza los valores de la fraccion 2" << endl;
		cout << "g) Imprime fraccion 1" << endl;
		cout << "h) Imprime fraccion 2" << endl;
		cout << "i) Terminar el programa" << endl;
		cout << "Ingrese una opcion: ";
		cin >> cOpcion;

		switch (cOpcion)
		{
			case 'a':
			{
				Fraccion f3 = fraccion1 + fraccion2;
				f3.toString();
				break;
			}

			case 'b':
			{
				Fraccion f3 = fraccion1 - fraccion2;
				f3.toString();
				break;
			}

			case 'c':
			{
				Fraccion f3 = fraccion1 * fraccion2;
				f3.toString();
				break;
			}

			case 'd':
			{
				Fraccion f3 = fraccion1 / fraccion2;
				f3.toString();
				break;
			}

			case 'e':
			{
				cout << "Ingrese el numerador: ";
				cin >> iNumerador;
				fraccion1.setNumerador(iNumerador);
				cout << "Ingrese el denominador: ";
				cin >> iDenominador;
				fraccion1.setDenominador(iDenominador);
				break;
			}

			case 'f':
			{
				cout << "Ingrese el numerador: ";
				cin >> iNumerador;
				fraccion2.setNumerador(iNumerador);
				cout << "Ingrese el denominador: ";
				cin >> iDenominador;
				fraccion2.setDenominador(iDenominador);
				break;
			}

			case 'g':
			{
				fraccion1.toString();
				break;
			}

			case 'h':
			{
				fraccion2.toString();
				break;
			}

			case 'i':
			{
				break;
			}

			default:
			{
				cout << "Ingrese una opcion (a-i): ";
				cin >> cOpcion;
				break;
			}
		}
	} while (cOpcion != 'i');

	return 0;
}
