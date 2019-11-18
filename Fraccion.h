
#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>
using namespace std;

class Fraccion
{
	private:
		int iNumerador;
		int iDenominador;
	public:
		// Constructores
		Fraccion();
		Fraccion(int, int);

		// Acceso
		int getNumerador();
		int getDenominador();

		// Modificación
		void setNumerador(int);
		void setDenominador(int);

		// Métodos
		void toString();

		// Operadores
		Fraccion operator+(Fraccion);
		Fraccion operator-(Fraccion);
		Fraccion operator*(Fraccion);
		Fraccion operator/(Fraccion);
		bool operator==(Fraccion);
		bool operator!=(Fraccion);
		bool operator<(Fraccion);
		bool operator>(Fraccion);
		bool operator<=(Fraccion);
		bool operator>=(Fraccion);
		void operator++(int);
		void operator--(int);
		void operator+=(Fraccion);
		void operator-=(Fraccion);
		void operator*=(Fraccion);
		void operator/=(Fraccion);
		friend istream& operator>>(istream&, Fraccion&);
		friend ostream& operator<<(ostream&, Fraccion&);
};

Fraccion::Fraccion()
{
	iNumerador = 1;
	iDenominador = 2;
}

Fraccion::Fraccion(int iN, int iD)
{
	iNumerador = iN;
	iDenominador = iD;
}

int Fraccion::getNumerador()
{
	return iNumerador;
}

int Fraccion::getDenominador()
{
	return iDenominador;
}

void Fraccion::setNumerador(int iN)
{
	iNumerador = iN;
}

void Fraccion::setDenominador(int iD)
{
	iDenominador = iD;
}

void Fraccion::toString()
{
	cout << iNumerador << '/' << iDenominador << endl;
}

Fraccion Fraccion::operator+(Fraccion f2)
{
	int iN, iD;
	iN = iNumerador * f2.iDenominador
	     + iDenominador * f2.iNumerador;
	iD = iDenominador * f2.iDenominador;
	Fraccion fr(iN, iD);
	return fr;
}

Fraccion Fraccion::operator-(Fraccion f2)
{
	int iN, iD;
	iN = iNumerador * f2.iDenominador - f2.iNumerador * iDenominador;
	iD = iDenominador * f2.iDenominador;
	Fraccion f3(iN, iD);
	return f3;
}

Fraccion Fraccion::operator*(Fraccion f2)
{
	int iN, iD;
	iN = iNumerador * f2.getNumerador();
	iD = iDenominador * f2.getDenominador();
	Fraccion f3(iN, iD);
	return f3;
}

Fraccion Fraccion::operator/(Fraccion f2)
{
	int iN, iD;
	iN = iNumerador * f2.getDenominador();
	iD = iDenominador * f2.getNumerador();
	Fraccion f3(iN, iD);
	return f3;
}

bool Fraccion::operator==(Fraccion f2)
{
	int iN1, iN2;
	iN1 = iNumerador * f2.getDenominador();
	iN2 = f2.getNumerador() * iDenominador;
	return iN1 == iN2;
}

bool Fraccion::operator!=(Fraccion f2)
{
	return !(*this == f2);
}

bool Fraccion::operator<(Fraccion f2)
{
	int iN1, iN2;
	iN1 = iNumerador * f2.getDenominador();
	iN2 = f2.getNumerador() * iDenominador;
	return iN1 < iN2;
}

bool Fraccion::operator>(Fraccion f2)
{
	int iN1, iN2;
	iN1 = iNumerador * f2.getDenominador();
	iN2 = f2.getNumerador() * iDenominador;
	return iN1 > iN2;
}

bool Fraccion::operator<=(Fraccion f2)
{
	return *this < f2 || *this == f2;
}

bool Fraccion::operator>=(Fraccion f2)
{
	return *this > f2 || *this == f2;
}

void Fraccion::operator++(int)
{
	iNumerador += iDenominador;
}

void Fraccion::operator--(int)
{
	iNumerador -= iDenominador;
}

void Fraccion::operator+=(Fraccion f2)
{
	*this = *this + f2;
}

void Fraccion::operator-=(Fraccion f2)
{
	*this = *this - f2;
}

void Fraccion::operator*=(Fraccion f2)
{
	*this = *this * f2;
}

void Fraccion::operator/=(Fraccion f2)
{
	*this = *this / f2;
}

istream& operator>>(istream &is, Fraccion &fr)
{
    cout << "Numerador: ";
	is >> fr.iNumerador;
	cout << "Denominador: ";
	is >> fr.iDenominador;
	return is;
}

ostream& operator<<(ostream &os, Fraccion &fr)
{
	os << fr.iNumerador << "/" << fr.iDenominador;
	return os;
}

#endif
