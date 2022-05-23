#pragma once
#include <iostream>
using namespace std;
class Datos
{
private:
	int cui;
	string nombre;
	double nota1, nota2, nota3;
public:
	Datos(int, string, double, double, double); 
	~Datos(); 
	
	void codigo();
	void nombres();
	double promedio();
};
