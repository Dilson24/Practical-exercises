#include<iostream>

/*Programa que lea 2 números y
determine cual de ellos es el mayor.
Es importante analizar que hay la posibilidad
que sean iguales*/

using namespace std;

int main(){
	cout<<"---PROGRAMA QUE IDENTIFICA SI UN NUMERO ES MAYOR O SON IGUALES---"<<endl;cout<<endl;
	
	int n1,n2;
	
	cout<<"Digite un numero: "; cin>> n1;
	cout<<"Digite otro numero: "; cin>>n2;
	
	if(n1==n2){
		cout<<"Ambos numeros son iguales";
	}
	else if (n1>n2){
		cout<<"El mayor es: "<<n1;
	}
	else{
		cout<<"El mayor es: "<<n2;
	}
}
