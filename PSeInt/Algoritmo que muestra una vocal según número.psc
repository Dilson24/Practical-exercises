//Algoritmo que solicite un número entero y muestre un mensaje indicando la vocal correspondiente, considerando que la vocal a = 1
Algoritmo VOCAL
	//Leer el numero
	Escribir "Ingrese un numero entre el 1 y el 5"
	Leer Numero
	//Controlar que sea valido para convertir
	SePuedeConvertir <-Verdadero
	Si Numero=0 Entonces
		Escribir  "No existe ninguna vocal para representar el 0"
		SePuedeConvertir <-Falso
	FinSi
	Si Numero<>trunc(numero) Entonces
		Escribir"El numero debe ser entero"
		SePuedeConvertir<-Falso 
	FinSi
	Si Numero> 5 Entonces
		
		Escribir "No existe ninguna vocal para representar el numero"
		SePuedeConvertir <-Falso
	FinSi
	Si Numero< 0 Entonces
		Escribir "El numero debe ser positivo"
		SePuedeConvertir <-Falso 
	FinSi
	//realizar la conversion
	Si SePuedeConvertir Entonces
		Si Numero= 1 Entonces
			
			Escribir "A"
		FinSi
	FinSi
	Si SePuedeConvertir Entonces
		Si Numero= 2 Entonces
			Escribir "E"
		FinSi
	FinSi
	Si SePuedeConvertir Entonces
		Si Numero= 3 Entonces
			
			
			Escribir "I"
		FinSi
	FinSi
	Si SePuedeConvertir Entonces
		Si Numero= 4 Entonces
			
			
			Escribir "O"
		FinSi
	FinSi
	Si SePuedeConvertir Entonces
		Si Numero= 5 Entonces
			
			
			Escribir "U"
		FinSi
	FinSi
	
FinAlgoritmo
