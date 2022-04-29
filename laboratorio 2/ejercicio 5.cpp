#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Ingrese el numero del que desea tener su tabla de multiplicacion: ";
	cin >> n;
	for (int i = 1; i <= 15; ++i) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
	return 0;
}
