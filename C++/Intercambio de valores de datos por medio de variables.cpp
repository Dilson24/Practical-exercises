#include<iostream>

/*Escriba un fragmento de programa que intercambie los valores de 
dos variables por ejemplo x= 5; y= 2 alfinalizar x=2 y y= 5.Uso de una variable*/

using namespace std;
int main(){
	cout<<"---PROGRAMA QUE INTERCAMBIA VARIABLES---"<<endl;cout<<endl;
    int x,y,aux;
	
	cout<<"Digite el valor de x: "; cin >>x;
	cout<<"Digite el valor de y: "; cin >>y;
	
	/*
	x = 5
	y =10
	*/
	
	aux = x;
	x = y;
	y = aux;

	
	cout<<"\nEL nuevo valor de x es: "<<x<<endl;
	cout<<"\nEl nuevo valor de y es:  "<<y<<endl;
	
	return 0;
}
