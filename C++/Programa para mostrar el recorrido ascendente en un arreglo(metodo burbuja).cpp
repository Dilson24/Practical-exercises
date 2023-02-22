#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int i, j, aux, datos[5];
	
	datos[0]=44;
	datos[1]=36;
	datos[2]=73;
	datos[3]=91;
	datos[4]=27;
	
	/*método de burbuja*/
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if (datos [j]>datos[j+1]){
				aux = datos[j];
				datos[j]= datos[j+1];
				datos[j+1]=aux;
		
			}
		}
	}
	cout<<"Orden ascendente:  ";
	for(i=0;i<5;i++){
		cout<<datos[i]<<"  ";
		
	}
	cout<<"\nOrden descendente: ";
		for(i=0;i<5;i++){
			cout<<datos[i]<<"  ";
		}
		getch;
}
