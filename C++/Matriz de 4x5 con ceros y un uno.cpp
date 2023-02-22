//Crea una matriz de 4x5 con ceros y un uno, después pide al usuario  que intente acertar la posición donde haya un uno, también dele al usuario la opción de rendirse o continuar después de cada intento


#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	char opc;
	int dim1, dim2, intentos=0;
	int matriz[4][5]{{0,0,0,0,0},
	                {0,0,0,0,0},
					{0,0,0,0,0},
					{0,0,0,0,0}};
				
	srand(time(0));
	matriz[rand()%3][rand()%4]=1;
	
	do{
		cout<<"Adivine en que posicion esta el [1] en una matriz de[4][5]"<<endl;
		for(int i =0;i<4;i++){
			for(int s=0;s<5;s++){
				cout<<"[]"<<"     ";
			}cout<<endl;
		}
		cout<<"\tNumero de intentos -> "<<intentos ++ <<endl;
		cout<<"fila: ";cin>>dim1;
		cout<<"columna: ";cin>>dim2;
		
		if(dim1 > 4 || dim2 >3){
			cout<<"|n Se ha salido del rango de la tabla\n"<<endl;
			system("pause");system("cls");
			matriz[dim1][dim2]=0;
			
			}else if(matriz[dim1][dim2] !=1){
			do{
				cout<<"Haz fallado, ¿Te quieres rendir?(r) o ¿Quieres continuar?(c)|n"<<endl;
				cin>>opc;
			}while(opc != 'c' & opc != 'r');
			system("cls");
		}
		
		
	}while(matriz[dim1][dim2] !=1 & opc != 'r');
	
			if(opc == 'c'){
				cout<<"\tFELICITACIONES ! lo haz conseguido con ";
				
			}else{
				cout<<"\tAlcanzaste los ";
				
			}cout<<intentos<<"intentos\n"<<endl;
			
			for(int i=0;i<4;i++){
				for(int s=0;s<5;s++){
					
					if(matriz [i][s]==1){
						cout<<"[1"<<"  ";
						dim1=i;dim2 = s;
					}else{
						cout<<matriz[i][s]<<"   ";
					}
					
				}cout<<endl;
			}
			
			cout<<"\n\nLa posicion contenedora del[i]: matriz["<<dim1<<"]]"<<dim2<<"]="<<matriz[dim1][dim2]<<endl;
			
			system("pause");
			return 0;
			}
			
		

