#include <iostream>
#include <string>

using namespace std;

class Mascota
{
public:
  Mascota(string nombre, int patas);
  string hablar();

private:
  virtual string palabra();

  string nombre;
  int patas;
};

Mascota::Mascota(string nombre, int patas):nombre(nombre),patas(patas)
{
  cout << "Acaba de nacer tu mascota "<<nombre<<" con "<<patas<<"patas"<<endl;
}

string Mascota::palabra()
{
  return "BUUU";
}

string Mascota::hablar()
{
  return nombre+" dice: "+this->palabra();
}

class Perro : public  Mascota
{
public:
  Perro(string nombre);

  string palabra();
};

Perro::Perro(string nombre):Mascota(nombre, 4)
{
}

string Perro::palabra()
{
  return "GUAU";
}

class Gato : public  Mascota
{
public:
  Gato(string nombre);

  string palabra();
};

Gato::Gato(string nombre):Mascota(nombre, 4)
{
}

string Gato::palabra()
{
  return "MIAU";
}

int main()
{
	string perr,cat;
	cout<<"Digita el nombre de tu perro: ";cin>>perr;
	cout<<"Digita el nombre de tu gato: ";cin>>cat;
  Mascota *m, *g;
 
  m=new Perro(perr);
  g=new Gato(cat);

  cout << m->hablar() << endl;
  cout << g->hablar() << endl;
  return 0;
}
