#include<iostream>

/*Programa que solicite una edad(entero) e indique si la edad está
en el rango de [18-25].*/

using namespace std;

int main (){
	int numero;
	
	cout<<"PROGRAMA QUE SOLICITA LA EDAD E INDICA SI LA"<<endl;cout<<endl; 
	cout<<"EDAD ESTA EN EL RANGO DE [18-25]"<<endl;cout<<endl;
	
	cout<<"Digite su edad: ";
	cin>>numero;
	
	if((numero>=18)&&(numero<=25)){
		cout<<"Su edad esta en el rango de [18-25]";
		
	}
	else{
		cout<<"Su edad esta fuera de rango";
	}
	return 0;
}
 
