#include<iostream>
//Programa que escribe la expresi�n "a/b + 1"
using namespace std;

int main(){
	cout<<"PROGRAMA QUE ESCRIBE LA EXPRESION A/B+1"<<endl;cout<<endl;
	float a,b, resultado = 0;
	
	cout<<"Digite el valor de a: "; cin >>a;
	cout<<"Digite el valor de b: "; cin >>b;
	
	resultado = (a/b) + 1 ;
	
	cout. precision(2);
	cout<<"\nEL resultado es "<<resultado<<endl; 
	
	return 0;
	}
