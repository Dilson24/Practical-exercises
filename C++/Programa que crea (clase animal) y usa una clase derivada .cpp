/*Programa que crea un clase base (class Animal)con los métodos  
de "dormir" y "comer", también crea una clase derivada (class Perro)
 con su método "ladrar", además crea objetos de la clase derivada con 
 su respectivo método.*/

#include <iostream>
using namespace std;

//clase base
class Animal {

   public:
    void comer() {
        cout << "Y puedo comer\n" << endl;
    }

    void dormir() {
        cout << "Tambien puedo dormir\n" << endl;
    }
};

//clase derivada
class Perro : public Animal {
 
   public:
    void ladrar() {
        cout << "Y por supuesto puedo ladrar, Woof!! Woof!!\n" << endl;
    }
};

int main() {
	cout<<"<---PROGRAMA QUE CREA LA CLASE ANIMAL Y LOS OBJETOS DE SU CLASE DERIVADA--->"<<endl;cout<<endl;
    // Crear objeto de la clase "Perro"
    Perro dog1;
    cout<<"Yo soy un perro\n"<<endl;
    //objeto creado + metodos de la clase base
    dog1.comer();
    dog1.dormir();

    //objeto creado + metodos de la clase derivada
    dog1.ladrar();

    return 0;
}
