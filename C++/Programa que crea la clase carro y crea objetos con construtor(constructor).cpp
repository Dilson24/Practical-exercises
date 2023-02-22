/*Programa que crea la clase carro y con su constructor imprime el valor de los objetos*/
#include <iostream>

using namespace std;

class Carro {        // Clase
  public:          // Especificador de acceso
    string marca;  // Atributo
    string modelo;  // Atributo
    int anio;      // Atributo
    Carro(string x, string y, int z); // Declaración del constructor
};

// Definición de constructor fuera de la clase
Carro::Carro(string x, string y, int z) {
  marca = x;
  modelo = y;
  anio = z;
}

int main() {
  cout<<"<---PROGRAMA QUE CREA LA CLASE CARRO Y CREA OBJETOS CON CONSTRUTOR--->"<<endl;cout<<endl;
  // Crear objetos de la clase y llama al constructor con diferentes valores
  Carro carroObj1("BMW ", "M3 GTR", 2001);
  Carro carroObj2("Nissan", "Skyline R34 GT-R", 2002);
  Carro carroObj3("Audi", "R8 V8", 2015);

  // Imprimir valores
  cout << "La marca del carro es "<<carroObj1.marca <<" ,su modelo es " << carroObj1.modelo <<" ,del anio  " << carroObj1.anio << "\n";
  cout << "La marca del carro es "<<carroObj2.marca <<" ,su modelo es " << carroObj2.modelo <<" ,del anio  " << carroObj2.anio << "\n";
  cout << "La marca del carro es "<<carroObj3.marca <<" ,su modelo es " << carroObj3.modelo <<" ,del anio  " << carroObj3.anio << "\n";
  return 0;
}
