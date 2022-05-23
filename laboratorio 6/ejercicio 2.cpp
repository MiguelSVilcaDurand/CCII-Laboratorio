#include "Datos.h"
#include "iostream"
#include "string"
// Constructor
Datos::Datos(int _cui, string _nombre, double _nota1, double _nota2, double _nota3)
{
	cui = _cui;
	nombre = _nombre;
	nota1 = _nota1;
	nota2 = _nota2;
	nota3 = _nota3;
}
Datos::~Datos()
{
}
void Datos::codigo(){
	cout << "CUI: " << cui << endl;
}
void Datos::nombres(){
	cout << "Nombre del Alumno: " << nombre << endl;
}
double Datos::promedio(){
	return nota1+nota2+nota3;
}

int main()
{
	Datos a1 = Datos(20190204,"Miguel",15.0,13.8,12.5);
	a1.codigo();
	a1.nombres();
	cout<<endl<<"1ra Nota= 15 "<<endl;
	cout<<"2da Nota= 13.8 "<<endl;
	cout<<"3ra Nota= 12.5 "<<endl<<endl;
	cout<<"El promedio de alumno es: "<< a1.promedio()/3 << endl;
	if((a1.promedio()/3)>10.5){
		cout<<"El alumno aprovo el curso"<<endl<<endl;
	}
	else{
		cout<<"El alumno no aprovo el curso"<<endl<<endl;
	}
	system("pause");
	return 0;
}


