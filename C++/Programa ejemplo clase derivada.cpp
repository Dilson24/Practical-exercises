/*Este ejemplo muestra una interfaz,
 sencilla de usando una clase derivada*/
#include <iostream>


class Base //clase principal o abstrata
{
    public:
    virtual void foo() = 0;
};

class Hija : public Base //Clase derivada 
{
    public://constructor de la case derivada
    void foo() override
    {
    	/* El espacio de nombres std debe aparecer en cada invocaci�n al objeto, 
		separ�ndolos con el operador de �mbito (::).
		se usa cuando no se especifica el "using namespace std"*/
        std::cout << "<-----Estoy en la clase hija----->";
    }
};
// funci�n principal. Es la porci�n ejecutable de un programa en C++
int main(){
	
    
    
	Hija h; //creaci�n de nuestro objeto
    h.foo();//objeto creado + los metodos de nuestro objeto
    getchar();//se usa para que no se cierre la consola.

    return 0;
}

