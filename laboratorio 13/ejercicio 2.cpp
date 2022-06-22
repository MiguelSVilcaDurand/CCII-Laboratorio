#include <iostream>
using namespace std;

struct student
{
	char nombre[20];
	int n;
	int edad;
	double talla;
} s[10];

int main()
{

	for(int i = 0; i < 10; ++i)
	{
		s[i].n = i+1;
		cout << "jugador : " << s[i].n << "," << endl;
		cout << "Nombre: ";
		cin >> s[i].nombre;
		cout << "Edad: ";
		cin >> s[i].edad;
		cout << "Talla: ";
		cin >> s[i].talla;
		cout << endl;
	}
	
	cout << "Menores de 20 y mas altos que 1.70m: " << endl;

	for(int i = 0; i < 10; ++i)
	{
		cout << "\nJugador: " << i+1 << endl;
		if( s[i].edad< 20 && s[i].talla > 1.70){
		cout << "Nombre: " << s[i].nombre << " Edad: " << s[i].edad << " Talla: " << s[i].talla << "m."<< endl;
		}
	}
	
	return 0;
}
