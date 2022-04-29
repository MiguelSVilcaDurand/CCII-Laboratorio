#include <iostream> 
#include <string.h> 

using namespace std; 

bool edad(int A_actual,int M_actual,int D_actual,int A,int M,int D) 
{ 
	int mes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
	if (D > D_actual) { 
		D_actual = D + mes[M - 1]; 
		M_actual = M_actual - 1; 
	} 
	if (M > M_actual) { 
		A_actual = A_actual - 1; 
		M_actual = M_actual + 12; 
	} 
	int dias = D_actual - D;  
	int meses = M_actual - M;  
	int anos = A_actual - A;  
	cout<<"El usuario tiene: "<< anos <<" Años, "<< meses << " Meses, "<< dias << " Dias. "<<endl; 
	return 0; 
} 
int main() 
{ 
	int a_actual,m_actual,d_actual,a,m,d; 
	cout<<"Ingrese el año actual: "; 
	cin>>a_actual; 
	cout<<"Ingrese el mes actual: "; 
	cin>>m_actual; 
	cout<<"Ingrese el dia actual: "; 
	cin>>d_actual; 
	cout<<"Ingrese el año de nacimiento: "; 
	cin>>a; 
	cout<<"Ingrese el mes de nacimiento: "; 
	cin>>m; 
	cout<<"Ingrese el dia de nacimiento: "; 
	cin>>d; 
	cout<<"Año actual: "<<a_actual<<" / "<<m_actual<<" / "<<d_actual<<endl;  	
	cout<<"Año de nacimiento: "<<a<<" / "<<m<<" / "<<d<<endl; 
	edad(a_actual,m_actual,d_actual,a,m,d);  	
	return 0; 
} 

