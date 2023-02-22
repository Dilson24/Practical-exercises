//Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el
//segundo arreglo

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int numero[5],multiplicados[5],num;
	
	cout<<"Digite cinco numeros: "<<endl;
	for(int i=0;i<5;i++){
		cin>>numero[i];
	}
	for(int i=0;i<5;i++){
		multiplicados[i]=numero[i]*2;}
		
		cout<<"Resultados de la muultiplicaion por dos(2)"<<endl;
		
		for(int s=0;s<5;s++){
			cout<<s+1<<".Posicion ="<<multiplicados[s]<<endl;
		}
		getch();
		return 0;
}
