#include "Rectangulo.h"
#include "iostream"
#include "string"
// Constructor
Rectangulo::Rectangulo(int _largo,int _ancho)
{
	largo = _largo;
	ancho = _ancho;
}
Rectangulo::~Rectangulo()
{
}
double Rectangulo::area(){
	return largo*ancho;
}
double Rectangulo::perimetro(){
	return 2*(largo+ancho);
}

int main()
{
	Rectangulo r1 = Rectangulo(9, 20);
	cout<<"Largo = 9"<<endl;
	cout<<"Ancho = 20"<<endl<<endl;
	cout<<"Area del rectangulo = "<<r1.area()<<endl<<endl;
	cout<<"Perimetro del rectangulo = "<<r1.perimetro()<<endl<<endl;
	system("pause");
	return 0;
}


