#include<iostream>

/*Programa que lea 3 números y determine cuál de ellos es el
mayor.*/

using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"PROGRAMA QUE DETERMINA EL MAYOR DE 3 NUMEROS"<<endl;cout<<endl;
	cout<<"Digite el 1er numero: "; cin>>n1;
	cout<<"Digite el 2do numero: "; cin>>n2;
	cout<<"Digite el 3er numero: "; cin>>n3;
	
	if(n1==n2==n3){
		cout<<"Los 3 numeros son iguales";	
	}
	else if(n1>n2,n1>n3){
		cout<<"El mayor es:  "<<n1;
	}
	else if(n2>n1,n2>n3){
		cout<<"El mayor es: "<<n2;
	}
	else if(n3>n2,n3>n2){
		cout<<"El mayor es: "<<n3;
	}
	
	return 0;
		
}
