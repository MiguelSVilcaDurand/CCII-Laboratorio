#include <iostream>
using namespace std;

struct student
{
	char nombre[20];
	int roll;
	int dia;
	int mes;
	int anio;
} s[10];

int main()
{
	int x;
	cout << "Ingrese la cantidad de personas a ingresar datos: " << endl;
	cin>>x;
	
	for(int i = 0; i < x; ++i)
	{
		s[i].roll = i+1;
		cout << "compañero Nro: " << s[i].roll << "," << endl;
		
		cout << "Ingrese el nombre: ";
		cin >> s[i].nombre;
		
		cout << "Fecha de Nacimiento: "<<endl;
		cout << "Dia: ";
		cin >> s[i].dia;
		cout << "Mes: ";
		cin >> s[i].mes;
		cout << "Año: ";
		cin >> s[i].anio;
		
		cout << endl;
	}
	
	cout << "Informacion Recopilada: " << endl;
	
	for(int i = 0; i < x; ++i)
	{
		cout << "\nPersona: " << i+1 << endl;
		cout << "Nombre: " << s[i].nombre << endl;
		cout << "Fecha de nacimiento: " << s[i].dia <<"/"<< s[i].mes <<"/"<< s[i].anio<<endl;
		if(s[i].mes == 06){
			cout << "\nCumple años en este mes " << endl;
		};
	}
	
	return 0;
}
