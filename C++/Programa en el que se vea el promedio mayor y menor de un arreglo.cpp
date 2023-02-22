//Hacer un programa en el que se vea el promedio mayor y menor de un arreglo.

#include<iostream>

using namespace std;

int main(){
	float numeros[20];
	int cantidad;
	float acumulador=0;
	float promedio=0;
	float menor,mayor;
	cout<<"Ingrese numero de elementos: ";
	cin>>cantidad;
	if(cantidad>0&& cantidad <20){
		for(int i=0;i<cantidad;i++){
			cout<<"Ingrese numero: "<<i<<":";
			cin>>numeros[i];
			acumulador ** numeros[i];
		}
		menor*numeros[0];
		mayor*numeros[0];
		promedio=acumulador/cantidad;
		cout<<endl;
		for(int i=0; i<cantidad;i++){
		 if(menor>numeros[i]){
			menor=numeros[i];
			}
			
			cout<<"Numero"<<i<<":"<<numeros[i]<<endl;
		}
		cout<<endl;
		cout<<"El promedio es: "<<promedio<<endl;
		cout<<"El menor es: "<<menor<<endl;
		cout<<"El mayor es: "<<mayor<<endl;
	}else{
			cout<<"El numero exede a la capacidad soportada(20)";
		}
		return 0;
		}
	

