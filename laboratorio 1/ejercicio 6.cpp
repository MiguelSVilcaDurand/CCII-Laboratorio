#include <bits/stdc++.h>
using namespace std;
void binario(unsigned n)
{
	if (n > 1)
		binario(n >> 1);
	
	printf("%d", n & 1);
}

int main(void)
{
	int a;
	cout<<"Ingrese un numero entre 100 y 999: ";
	cin>>a;
	if (a < 100 || a > 999) { 
		cout << "El numero ingresado no esta en entre 100 y 999: " << endl;  
		return 1; 
	}
	cout<<a<<" en codigo binario es: ";
	binario(a);
	return 0;
}
