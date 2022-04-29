#include <iostream>
using namespace std;

int main() {
	int menor, mayor, i;
	bool esprimo = true;
	
	cout << "Ingrese los dos intervalos: "<< endl;
	cin >> menor >> mayor;
	
	cout << "los numeros primos" << menor << " y " << mayor << " son: " << endl;
	
	while (menor < mayor) {
		esprimo = true;
		if (menor == 0 || menor == 1) {
			esprimo = false;
		}
		for (i = 2; i <= menor/2; ++i) {
			if (menor % i == 0) {
				esprimo = false;
				break;
			}
		}
		if (esprimo)
			cout << menor << ", ";
		
		++menor;
	}
	return 0;
}
