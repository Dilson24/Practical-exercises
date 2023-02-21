#include<iostream>
#include<stdlib.h>

/*Programa que solicite de la
entrada estándar un número entero del 1 al
10 y muestre su tabla de multiplicar hasta el 20*/

using namespace std;

int main(){
	cout<<"---PROGRAMA QUE CALCULA LA TABLA DE MULTIPLICAR HASTA EL 20---"<<endl;cout<<endl;
	cout<<"---DE LOS NUMEROS EN EL RANGO DE [1-10]---"<<endl;cout<<endl;
	int numero;
	
	do{
		cout<<"Digite un numero:  "; cin>>numero;
	}while ((numero<1) ||  (numero>10));
	
	for(int i=1;i<=20;i++){
		cout<<numero<<" *  "<<i<<" = "<<numero*i<<endl;
	}
	cout<<"\n\n";
	system("pause");
	return 0;	
}
