//Algoritmo que solicite la edad de 2 hermanos y muestre un mensaje indicando la edad del mayor y cuantos años de diferencia tiene con el menor.
Algoritmo Edades
	Definir E1 Como Entero
	Definir E2 Como Entero
	Definir Dif Como Entero
	//Leer el numero
	Escribir "Ingrese edad del primer hermano"
	Leer E1
	Escribir "Ingrese edad del segundo hermano"
	Leer E2
	//controlar que sea valido para convertir
	Si (E1 > E2) Entonces
		Dif= E2 - E1
		Escribir "El 1er hermano tiene: ", " ", E1  ," Y es mayor por: ", Dif, "", " Años"
	FinSi
	Si (E2 > E1) Entonces
		Dif = E2 - E1 
		Escribir "El 2do hermano tiene: ", " ", E2  ," Y es mayor por: ", Dif, "", " Años"
	FinSi
	
FinAlgoritmo
