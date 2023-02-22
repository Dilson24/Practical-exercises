/*Escriba un programa e ingrese dos números en main y páselos 
al constructor predeterminado de la clase. Muestre el resultado 
de la suma de dos números.*/
#include <iostream>
using namespace std;

class dato{
   public:
   float nu1,nu2;
   dato(float num1,float num2){//constructor predeterminado
   nu1=num1;nu2=num2;
    }
    float sum_num(){return nu1+nu2;}//metodo de la clase base
};
// función principal. Es la porción ejecutable de un programa en C++
int main (){
    cout<<"<---PROGRAMA QUE CALCULA LA SUMA DE DOS NUMEROS USANDO UNA CLASE--->"<<endl;cout<<endl;
    float num1;//definicion de variable dentro del main
	float num2;
	cout<<"\nIngrese el primer numero : ";
	cin>>num1;
	cout<<"\nIngrese el segundo numero : ";
	cin>>num2;
    //objeto de la clase base
	dato usar_nu(num1,num2);
    //salida del programa + objeto creado + metodo de la clase base
	cout << "\nEl resultado de la suma es:"<< usar_nu.sum_num();
	
	return 0;
}


