//Algoritmo que calcula el factorial de un n�mero
Algoritmo Algoritmo_Factorial 
	factorial=1
	n=1
	num=0
	Escribir "Digitar numero"
	leer num
	Para n <-1 Hasta num Con Paso 1 Hacer
		Si n<=num Entonces
			
			factorial= factorial*n
			
		SiNo
		Fin Si
		
		Escribir "El numero factorial es", factorial
	Fin Para
	
FinAlgoritmo
