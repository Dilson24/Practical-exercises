/*Programa para diligenciar una matriz solicitando al usuario el n�mero de filas y de columnas, para despu�s mostrar la matriz en la pantalla.*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;
	
	cout<<"Digte el n�mero de filas: ";
	cin>>filas;
	cout<<"Digite el n�mero de columnas: ";
	cin>>columnas;
	
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un n�mero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
	
}
