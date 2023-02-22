/*Construya una clase llamada "Rect�ngulo"
que tenga los siguientes atributos: largo y ancho,
y los siguientes m�todos: per�metro() y �rea(). */
#include<iostream>
using namespace std;

class Rectangulo{
 private: //atributos
  float largo;
  float ancho;
 public://metodos
  Rectangulo(float,float);//definici�n del constructor
  void Perimetro();
  void Area();
};
//constructor, nos sirve para inicializar los atributos
Rectangulo::Rectangulo(float L,float A){
 largo=L;
 ancho=A;
}
//constructor para inicializar los metodos que va tener nuestra clase
void Rectangulo::Perimetro(){
 cout<<"El Perimetro es:"<<(2*largo+2*ancho)<<endl;
}

void Rectangulo::Area(){
 cout<<"El Area Del Rectangulo es de:"<<(largo*ancho)<<endl;
}
//funci�n principal, Es la porci�n ejecutable de nuestro objeto en C++
int main(){
//titulo del programa
cout<<"<---PROGRAMA QUE CREA LA CLASE 'RECTANGULO' Y MUESTRA SU RESULTADO--->"<<endl;cout<<endl;
 //creaci�n del objeto
 Rectangulo R1(8,6); //Datos del rectangulo
 R1.Perimetro();
 R1.Area();
} 
