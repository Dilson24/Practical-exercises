#include <iostream>

/*Programa que calcula el area de un rectangulo y un triangulo con una clase abstracta o derivada*/
 
using namespace std;
 
// Clase base 
class Forma 
{
public:
   // Proporciona funciones virtuales puras del marco de la interfaz.
   
   virtual float obtenerArea() = 0;
   void establecerAncho(float a)
   {
      ancho = a;
   }
   void establecerAltura(float al)
   {
      altura = al;
   }
protected:
   float  ancho;
   float altura;
};
 
// Clase derivada
class Rectangulo: public Forma //constructor de la case derivada
{
public://inicializacion de las variables de nuestra clase derivada
   float obtenerArea()
   { 
      return (ancho * altura); //Uso del 'return' para devolver un valor.
   }
};
// Clase derivada 
class Triangulo: public Forma //constructor de la case derivada
{
public://inicializacion de las variables de nuestra clase derivada 
   float obtenerArea()
   { 
      return (ancho * altura)/2; //Uso del 'return' para devolver un valor.
   }
};
 
int main(void)
{
   cout<<"<---PROGRAMA QUE CALCULA EL AREA DE UN TRIANGULO,"<<endl;cout<<endl;
   cout<<"Y DE UN RECTNAGULO CON CLASE DERIVADA Y CLASE ABSTRACTA--->>"<<endl;cout<<endl;
   Rectangulo Rect; //creación de objeto 1
   Triangulo  Tri;//creación de objeto 2
   //Datos del area del rectangulo
   Rect.establecerAncho(5);//objeto creado + el metodo + los parametros de nuestro objeto
   Rect.establecerAltura(7);//objeto creado + el metodo + los parametros de nuestro objeto
   // El área del objeto de salida
   cout << "Total area rectangulo: " << Rect.obtenerArea() << endl;
   //Datos del area del triangulo
   Tri.establecerAncho(5);//objeto creado + el metodo + los parametros de nuestro objeto
   Tri.establecerAltura(7);//objeto creado + el metodo + los parametros de nuestro objeto
   // El área del objeto de salida
   cout << "Total area triangulo: " << Tri.obtenerArea() << endl; 

   return 0;
}
/*De los ejemplos anteriores, podemos ver cómo una clase abstracta es 
definir una interfaz obtenerArea(), dos clases derivadas es cómo calcular 
el área de un algoritmo diferente para lograr la misma función.*/



