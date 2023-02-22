//Realice un programa  que calcule la suma de dos matrices cuadradas de 3x3 y mostrarlas en pantalla, el usuario debe de tener la opción de llenar las matrices por su cuenta o generar automáticamente los datos


#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()  {
	setlocale(LC_ALL,"");
	int matriz[3][3];
	int matriz_2[3][3];
	int suma=0, suma_2=0,numeros;
	char opc;
	
	cout<<"Desea ingregar los valores de la matrices (s/n): ";
	cin>>opc;
	
	if(opc=='s'){
		cout<<endl<<"\tPRIMERA MATRIZ 3X3"<<endl;
		for(int i = 0; i <3; i++){
			for(int s=0;s<3;s++){
				
				cout<<"Valor de la casilla["<<i<<"]["<<s<<"]: ";
				cin>>matriz[i][s];
			}
		}
		cout<<endl<<"\tSegunda matriz 3X3"<<endl;
		for(int i=0;i <3;i++){
			for(int s=0;s<3;s++){
				
				cout<<"Valor de la casilla["<<i<<"]["<<s<<"]: ";
				cin>>matriz_2[i][s];
				
			}
		}
	}cout<<"\n";
	
	srand(time(0));
	for(int i=0;i <3;i++){
		for(int s=0;s <3;s++){
			if(opc !='n'){
				cout<<matriz[i][s]<<" ";
			}else{matriz[i][s]=1+rand()%10;
			cout<<matriz[i][s]<<" ";
			}
		}cout<<endl;
	}
	cout<<endl<<endl;
	for(int i=0; i <3;i++){
		for(int s=0;s <3;s++){
			if(opc !='n'){
				cout<<matriz_2[i][s]<<" ";
			}
		}cout<<endl;
	}
	for(int i=0;i <3;i++){
		for(int s=0;s <3;s++){
			
			suma+=matriz[i][s];
			suma_2+=matriz_2[i][s];
			
		}cout<<endl;
	}
	cout<<suma<<" + "
	<<suma_2<< " = "<<suma + suma_2;
	
	getch();
	return 0;
	}
	
	

