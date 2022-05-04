#include <iostream>

using namespace std;
	
void sumF(int M[3][3])
{
	int i,j,sum = 0;
	cout << "\nFinding Sum of each row:\n\n";
	for (i = 0; i < 3; ++i) {
		for (j = 0; j < 3; ++j) {
			sum = sum + M[i][j];
		}
		cout
			<< "Suma de la fila "
			<< i << " = " << sum
			<< endl;
		sum = 0;
	}
}

int main()
{
	int i,j;
	int M[3][3];
	int x = 1;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			M[i][j] = x++;
		sumF(M);
	return 0;
}


	

