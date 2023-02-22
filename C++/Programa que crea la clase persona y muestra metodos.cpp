#include <iostream>

/*En este ejemplo, veremos cómo se define una clase en C++, 
como se declaran sus propiedades (también conocidas como datos miembro)
 y métodos (también conocidos como funciones miembro).
También veremos cómo se programan los métodos para establecer lo que hacen 
una vez que son llamados mediante mensajes.
Y finalmente, veremos cómo se declara un objeto de una clase y se le manipula 
mediante llamadas a métodos.*/


using namespace std;
// Declaración de la clase

class persona{
public:             //metodos
    void dormir();
    void hablar();
    void contar();
    void adquirirNombre();
    void decirNombre();
private:
    char nombre [40]; //atributo
};
//constructor para inicializar los metodos que va tener nuestra clase
void persona::dormir(){
    cout << "zzzzzzzzz" << endl;
}
void persona::hablar(){
    cout << "bla bla bla bla" << endl;
}
void persona::contar(){
    cout << "1, 2, 3, 4, 5..." << endl;
}
void persona::adquirirNombre(){
    cout << "Soy una persona. Ingrese mi nombre: ";
    cin >> nombre;
}
void persona::decirNombre(){
    cout << "Mi nombre es: " << nombre << endl;
}

//función principal, Es la porción ejecutable de nuestro objeto en C++
int main(){
	//titulo del programa
	
	cout<<"<---PROGRAMA QUE CREA LA CLASE PERSONA Y MUESTRA METODOS--->"<<endl;cout<<endl;
	
    int respuesta = 0; //respuesta negativa que el prgrama toma por defecto en cada pregunta
    
	// Creando una persona y capturando su nombre
    cout << "Desea crear una persona? 1=Si, 0=No: ";
    cin >> respuesta;

    if (respuesta == 1){ //Condicional
    persona p; //creación de nuestro objeto
    p.adquirirNombre(); //objeto creado + la acción que le vamos asignar.
    
	// si el usuario lo desea la persona puede decir su nombre
    cout << "Desea que diga mi nombre? 1=Si, 0=No: "; //mensaje para que usuario decida
    cin >> respuesta;
    if (respuesta == 1)//Condicional
    {
         p.decirNombre();
    }
   	
   // El usuario decide si la persona habla
   cout << "Quiere escucharme hablar? 1=Si, 0=No: ";
   cin >> respuesta;
   if (respuesta == 1)
   {
         p.hablar();
   }
   cout << "Desea que vaya a dormir? 1=Si, 0=No: ";
   cin >> respuesta;
   if (respuesta == 1)
   {
        p.dormir();
   }
   cout << "Desea oirme contar? 1=Si, 0=No: ";
   cin >> respuesta;
   if (respuesta == 1)
   {
        p.contar();
   }
}
system("pause");
return 0;
}
