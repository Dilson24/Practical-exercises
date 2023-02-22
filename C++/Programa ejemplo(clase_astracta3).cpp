
//2.Lados de un triángulo. 
//Identifica el lado Mayor. 
//Identifica si es Equilátero.
 #include <iostream> 
 using namespace std; 
 class Triangulo { 
 public: 
     int lado1,lado2,lado3; 
	 void inicializar() { 
	 cout << "Medida lado 1: "; cin >> lado1; 
	 cout << "Medida lado 2: "; cin >> lado2; 
	 cout << "Medida lado 3: "; cin >> lado3; } 
	 
	 void ladoMayor() { cout << "Lado mayor:";
	 if (lado1>lado2 && lado1>lado3) cout << lado1; 
	 else if (lado2>lado3) cout << lado2; 
	 else cout << lado3; } 
	 
	 void esEquilatero() { 
	 if (lado1==lado2 && lado1==lado3) 
	 cout << "\nEs equilatero"; 
	 else cout << "\nNo es equilatero"; }}; 
	 
	 int main() { 
	 Triangulo triangulo1; 
	 triangulo1.inicializar(); 
	 triangulo1.ladoMayor(); 
	 triangulo1.esEquilatero(); 
	 return 0; } 
