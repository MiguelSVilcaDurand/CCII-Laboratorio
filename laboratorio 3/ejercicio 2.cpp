#include <iostream> 
#include <string.h> 

using namespace std; 

bool bisiesto(int A) 
{ 
	if (A % 400 == 0) 
		return true; 
	if (A % 100 == 0) 
		return false; 
	if (A % 4 == 0) 
		return true; 
	return false; 
} 

int main() 
{ 
	int a; 
	cout<<"Ingrese un a�o: "; 
	cin>>a;
	bisiesto(a) ?   	 	
		cout << "El a�o: " << a << " es bisiesto":  	 	
		cout << "El a�o: " << a << " no es bisiesto";  	
	return 0; 
} 
