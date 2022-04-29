#include<iostream.h> 
#include<conio.h> 
void main ( ) 
{   
	struct student 
	{ 
		int subject1 ; 
		int subject2 ; 
		int subject3 ; 
	}; 
	int i , n, total; 
	float av ; 
	clrscr(); 
	struct student st[20]; 
	cout<<" \n Enter the Number of Students : " ; 
	cin>> n ; 
	for (i =0; i<n; i++) 
	{ 
		cout<<"\nEnter Marks of three Subjects of "<<i+1<<" Student : " ; 
		total = 0 ; 
		cin>> st[i].subject1 >>st[i].subject2>>st[i].subject3; 
		total = st[i].subject1+st[i].subject2+st[i].subject3; 
		av = (float) total /3 ; 
		cout<<"\nAVERAGE Marks of " <<i+1<<" Student is = "<< av ; 
	} 
	getch( ); 
} 
