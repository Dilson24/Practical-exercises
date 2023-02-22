#include<iostream>
#include<conio.h>

/*Realizar un programa que lea números hasta que se introduzca un 0, en
ese momento el programa debe terminar y mostrar en la salida el número
de valores leídos mayores que cero.*/

 
using namespace std;

int main(){
	
	cout<<"PROGRAMA QUE LEE NUMEROS HASTA QUE SE INTRODUCE UN CERO."<<endl;cout<<endl;
	
	int numero,conteo=0; 
	
	do{
		cout<<"Digite un numero: "; 
		cin>>numero;
		if(numero>0){
			conteo++; //aumentamos el conteo cada vez que encuentra un numero mayor a 0	
		}
	}while(numero != 0);
	
	
	cout<<"\nEl total de numeros mayores que 0 es: "<<conteo;
	
	getch();
	return 0;
}
