/*
Elabore programas en C++ que resuelven los siguientes problemas:
Que teniendo como datos los 3 lados de un triángulo nos determine e imprima
si es un triángulo equilátero, isósceles o escaleno. Ejemplo: Ingrese los 3 lados:
3 4 5 Se mostrará: Equilátero: F Isósceles: F Escaleno: V
*/

#include<iostream>
#include<conio.h>


using namespace std;

char verificaescaleno(float a,float b, float c)
{
	char escaleno;
	escaleno = (a != b&&a != c&&b != c)?'V':'F';
	return escaleno;
}


char verificaisosceles(float a, float b, float c)
{
	char isosceles;
	isosceles = (a == b&&b != c) || (a != b&&b == c) ||
		(a == c&&b != c) ? 'V' : 'F';
	return isosceles;
}

char verificaequilatero(float a, float b, float c)
{
	char equilatero;
	equilatero = (a == b&&a == c) ? 'V' : 'F';
	return equilatero;
}

int main()
{
	int a;
	int b;
	int c;
	cout << "ingrese valores del triangulo" << endl;
	cout << "ingrese lado a: ";
	cin >> a;
	cout << "ingrese lado b: ";
	cin >> b;
	cout << "ingrese lado c: ";
	cin >> c;
	cout << "equilatero" << verificaequilatero(a, b, c)<<endl;
	cout << "isosceles" << verificaisosceles(a, b, c)<<endl;
	cout << "escaleno" << verificaescaleno(a, b, c)<<endl;


	_getch();
	
}