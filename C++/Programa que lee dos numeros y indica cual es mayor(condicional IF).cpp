#include<iostream>

/*Programa que lea 2 números y determine cuál de ellos es el
mayor. Es importante analizar que hay la posibilidad que sean iguales.*/

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"PROGRAMA LEE DOS NUMEROS Y DETERMINA CUAL ES EL MAYOR,"<<endl;cout<<endl;
	cout<<"ADEMAS IDENTIFICA SI SON IGUALES"<<endl;cout<<endl;
	
	cout<<"Digite el 1er numero: "; cin>>n1;
	cout<<"Digite el 2do numero: "; cin>>n2;
	
	if(n1==n2){
		cout<<"Ambos numeros son iguales";
	}
	else if(n1>n2){
		cout<<"El mayor es: "<<n1;
	}
	else{
		cout<<"El mayor es: "<<n2;
	}
	return 0;
}
