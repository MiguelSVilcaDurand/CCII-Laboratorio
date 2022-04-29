#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n, sum=0;
	cout << "Ingrese 10 valores: ";
	for(int i=0;i<10;i++)
	{
		cin >> n;
		if (n<=0)
		{
			sum+= n;
		} 
	}
	cout << "La suma de los Numeros negativos es: " << sum ;
	return 0;
}
