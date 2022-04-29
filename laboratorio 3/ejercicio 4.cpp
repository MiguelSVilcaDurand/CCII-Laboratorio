#include <iostream> 
#include <string.h> 

using namespace std; 

bool Primo(int n){  	if(n==1||n==0) return false; 
for(int i=2; i<n; i++){ 
	if(n%i==0) return false; 
} 
return true; 
} 

int main() 
{ 
	int n; 
	cout<<"Ingrese el numero limitepara los primos: ";  	cin>>n; 
	for(int i=1; i<=n; i++){ 
		if(Primo(i)) { 
			cout << i << " "; 
		} 
	} 
	return 0; 
} 

