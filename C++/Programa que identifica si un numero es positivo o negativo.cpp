#include<iostream>

/*Programa para comprobar si el numero digitado
 por el usuario es negativo o positivo.*/
 
 using namespace std;
 
 int main(){
 	cout<<"PROGRAMA PARA COMPROBAR SI EL NUMERO DIGITADO ES NEGATIVO O POSITIVO"<<endl;cout<<endl;
	double numero;
 	
 	cout<<"Digite un numero:  ";
 	cin>>numero;
 	
 	if(numero==0){
 		cout<<"El numero es neutro";
	 }
	else if(numero>0){
		cout<<"El numero es positivo";
	}
	else{
		cout<<"El numero es negativo";
	}
	return 0;	

 }

