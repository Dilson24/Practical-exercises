//Algoritmo pasa identificar que un número  ingresado es primo
Algoritmo Primo_no_primo
	
	Escribir "Digite un numero"
	leer num
	Para n <-1 Hasta num Con Paso 1 Hacer
		Si num mod n=0 Entonces
			conteo=conteo+1
		SiNo
			
		Fin Si
		Si conteo > 2 Entonces
			escribir "El numero",num,"No es primo"
		SiNo
			escribir "El numero",num,"SI es primo"
		Fin Si
	Fin Para
	
FinAlgoritmo
