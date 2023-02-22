#include<iostream>

/*Programa que lea un valor entero y determine si se trata de un
número par o impar., identificar si el número es 0
*/

using namespace std;

int main(){
	int numero;
	
	cout<<"PROGRAMA QUE DETERMINA SI ES UN NUMERO IMPAR O PAR,"<<endl;cout<<endl;
	cout<<"ADEMAS IDENTIFICA SI EL NUMERO ES 0"<<endl;cout<<endl;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){
		cout<<"El numoero es par";
	}
	else{
		cout<<"El numero es impar";
	}
	return 0;
	
}
