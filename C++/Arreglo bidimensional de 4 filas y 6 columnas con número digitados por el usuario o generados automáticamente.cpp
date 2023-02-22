//Llenar un arreglo bidimensional de 4 filas y 6 columnas con n�mero digitados por el usuario o generados autom�ticamente, una vez llenado todo el arreglo imprimir en pantalla. Luego pedirle al usuario que busque una posici�n en la matriz solicitando las filas y las columnas. Muestra un pantalla el dato en esa posici�n.


#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	float arreglo[4][6];
	int dim1, dim2, dato;
	char opc;
	
	cout<<"Auto(s/n): ";cin>>opc;
	system("cls");
	
	
	         if (opc =='s' || opc =='S'){
	      	
		        srand(time(0));
	        	for(int i = 0;i < 4;i++){
			        for (int s = 0;s < 6;s++){
		
			        arreglo[i][s]=rand()%9;
			        
					}
		}cout<<endl;
	}else{
		for(int i=0;i < 4;i++){
			
			for(int s= 0;s< 6;s++){
				cout<<"fila"<<i<<", columna"<<s<<". Digite un numero: ";
				cin>>arreglo[i][s];
			}
		}
	}
	
		do{
			cout<<"***********************************************"<<endl;
			for(int i= 0;i< 4;i++){
				
				for(int s = 0;s < 6 ;s++){
					
					cout<<arreglo[i][s]<<"            ";
					
				}
				cout<<endl;
			}
			
			cout<<"\n. Busca una posicion en la matriz\n";
			
			cout<<"Arreglo[...][]: ";cin>>dim1;
			cout<<"Arreglo["<<dim1<<"][...]: ";cin>>dim2;
			cout<<"Arreglo["<<dim1<<"]["<<dim2<<"]: ";arreglo[dim1][dim2];
			
			if(dim1> 4 || dim2 > 6 || dim1 < 0 ||dim2 < 0){
				cout<<"\n\nTe haz salido del rango de filas o columnas de matriz"<<endl;
			}
			
				cout<<"\nBuscar otro (s/n): ";cin>>opc;
				
				if(opc=='s'){
					system("cls");
				}
				
			}while (opc =='s' || opc == 'S');
			
			system("pause");
			return 0;}
	
     
