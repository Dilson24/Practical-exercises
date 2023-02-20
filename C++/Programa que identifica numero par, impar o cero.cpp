#include<iostream>
/*Programa que identifica si el número ingresado es par, impar o si es cero*/
using namespace std;

int main(){
	cout<<"---PROGRAMA QUE IDENTIFICA SI UN NUMERO ES PAR, IMPAR O SI ES CERO---"<<endl;cout<<endl;
	int numero;
	cout<<"Digite un numero:  "; 
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if (numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
	return 0;
}
