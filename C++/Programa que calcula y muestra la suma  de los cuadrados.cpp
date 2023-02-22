#include<iostream>
#include<conio.h>

/*Realizar un programa que calcule y muestre la suma de los cuadrados de
los 10 primeros enteros mayores que cero.*/

using namespace std;

int main(){
	
	cout<<"PROGRAMA QUE CALCULA y MUESTRA LA SUMA  DE LOS CUADRADOS"<<endl;cout<<endl;
	cout<<"DE LOS 10 PRIMEROS ENTERO MAYORES QUE CERO."<<endl;cout<<endl;
	
	int suma = 0,cuadrado;
	
	for(int i=1;i<=10;i++){
		cuadrado = i * i;
		suma = suma + cuadrado; //suma += cuadrado 	
	}
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	getch();
	return 0;
}
