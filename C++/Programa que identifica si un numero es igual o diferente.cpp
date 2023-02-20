#include<iostream>

/*Programa para identificar, si el número dado por el usuario
es igual o diferente del número previo registrado en el sistema.*/

using namespace std;

int main(){
	cout<<"---PROGRAMA QUE IDENTIFICA SI UN NUMERO ES IGUAL O DIFERENTE"<<endl;cout<<endl;
	cout<<"DEL NUMERO PREVIAMENTE INGRESADO EN EL SISTEMA---"<<endl;cout<<endl;
    int numero, dato = 5;
	
	cout<<"Digite un numero: ";
	cin>>numero;

    if(numero == dato){ 
        cout<<"El numero es 5";
	}
	else{
	     	cout<<"El numero es diferente de 5";	
	}

	
	
	return 0;
}
