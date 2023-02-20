#include<iostream>

/*La nota final de un estudiante es la media ponderada de 3 notas. La nota de practica que
equivale a un 30% del total, la nota teórica que equivale a un 60% y la nota de
participación que equivale a un 10% restante.Escriba un programa que lea de la entrada
estándar las 3 notas y escriba la salida estándar de la nota final.*/

using namespace std;

int main(){
	cout<<"---PROGRAMA QUE LEE 3 NOTAS Y MUESTRA SU SALIDA ESTANDAR---"<<endl;cout<<endl;
    float practica, teorica,participacion,nota_final=0;
	
	cout<<"Digite la nota de practica: "; cin >>practica;
	cout<<"Digite la nota teorica: "; cin >> teorica;
	cout<<"Digite la nota participacion: "; cin >>participacion;

	
	practica*= 0.30; //practica = practica * 0.30
	teorica *= 0.60;
	participacion *= 0.10;

	nota_final  = practica + teorica + participacion; 
	 
	cout<<"\nLa nota final es: "<<nota_final;
	
	
	return 0;
}
