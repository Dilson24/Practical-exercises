#include<iostream>
#include<math.h>

/*Programa que lea de la entrada est�ndar los 2 catetos de un
tri�ngulo rect�ngulo y escriba en la salida est�ndar su hipotenusa.*/

using namespace std;

int main(){
 float cateto1,cateto2,hipotenusa;
 
 cout<<"
 "<<endl;cout<<endl;
 
 cout<<"Digite el cateto (1): "; cin>>cateto1;
 cout<<"Digite el cateto (2): "; cin>>cateto2;
 
 hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
 cout.precision(3);
 cout<<"\nEl resultado de la hipotenusa es: "<<hipotenusa;
 
 return 0;
}
