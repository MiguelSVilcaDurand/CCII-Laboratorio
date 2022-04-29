#include <iostream>
using namespace std;
int main()
{
	char n[20],ap[20],am[20];	
	cout << "Introduce tu nombre: ";
	cin >> n;
	cout << "Introduce tu apellido paterno: ";
	cin >> ap; 
	cout << "Introduce tu apellido materno: ";
	cin >> am;
	cout << "Tu correo UNSA es: "<<n[0]<<ap<<am[0]<<"@unsa.edu.pe";
	return 0;
}
