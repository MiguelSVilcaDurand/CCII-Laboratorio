#include <iostream>
using namespace std;
int main()
{
	int n, i;
	float num[50], sum=0.0, media;
	cout << "Ingrese la cantidad de numeros a promediar: ";
	cin >> n;
	while (n > 100 || n <= 0)
	{
		cout << "Error! La cantida es muy grande." << endl;
		cout << "Ingrese otro numero: ";
		cin >> n;
	}
	for(i = 0; i < n; ++i)
	{
		cout << i + 1 << ". Ingrese un valor: ";
		cin >> num[i];
		sum += num[i];
	}
	media = sum / n;
	cout << "La media es = " << media;
	return 0;
}
