#pragma once
#include <iostream>
using namespace std;
class Rectangulo
{
private:
	double largo;
	double ancho;
public:
	Rectangulo(int, int); // Constructor
	~Rectangulo(); // Destructor
	
	double area();
	double perimetro();
};
