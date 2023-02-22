/*Realice un programa, de tal manera que se construya una soluci�n para la jerarqu�a 
(herencia) simple de las clases mostrada a continuaci�n.                
              Veh�culo
         Carro        Moto
   Avanza		          Avanza
*/


#include <iostream>
using namespace std;

class Vehiculo { //Super clase
public:
  void avanza() {}//Metodo
};

class Carro : public Vehiculo {//Clase derivada o heredada 
public:
  void avanza(void)
     { cout << "Avanza carro." << endl; }
};

class Moto: public Vehiculo {//Clase derivada o heredada 
public:
  void avanza(void)
     { cout << "Avanza moto." << endl; }
};

int main()
{
  cout<<"<---PROGRAMA QUE MUESTRA LA HERENCIA SIMPLE DE LA CLASE 'VEHICULO'---->"<<endl;cout<<endl;	
  Moto t;
  Carro c;

  t.avanza();
  c.avanza();

  return 0;
}
