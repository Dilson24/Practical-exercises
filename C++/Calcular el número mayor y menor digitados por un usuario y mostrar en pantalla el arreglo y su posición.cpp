//Calcular el número mayor y menor digitados por un usuario y mostrar en pantalla el arreglo y su posición


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	system("cls");
	setlocale(LC_ALL, "");
	char opc;
	float numeros[5],mayor=0,menor=0;
	
	cout<<"\tCalculador del numero > y <\n\n";
	for(int i=0;i<5;i++){
		cout<<"Ingrese numero en numeros["<<i<<"]: ";
		cin>>numeros[i];
	}cout<<endl;
	
	for(int s= 0;s<5;s++){
		
		if(s==0){
			mayor,menor=numeros[s];
			
	}if(numeros[s]>mayor){
		mayor = numeros[s];
		
	}else if(numeros[s]<menor){
		menor = numeros[s];
		
	}cout<<numeros[s]<<"|" ;
	
	}cout<<" <- Arreglo\n\n";
	
	for(int s =0; s<5;s++){
		cout<<s<<"   ";
	}cout<<" <- posicion\n\n";
	
	cout<<"\n El numero mayor es: "<<mayor<<endl;
	cout<<"El numero menor es: "<<menor<<endl;
	
	cin>>opc;
	if(opc == 'y'){
		main();
	}
	system("pause");
	return 0;
}
		

