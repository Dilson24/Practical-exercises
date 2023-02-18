//Algoritmo patron pares negativos, impares positivos
Algoritmo Patron_de_números
	suma=0
	suma1= 0
	
	Escribir "Digite los numeros"
	leer num
	Para n <- 1 Hasta num Con Paso 1 Hacer
		Si n mod 2=0 Entonces
			
			impa=n*(-1)
			
			suma1 = suma1+impa
			
		SiNo
			suma=suma+n
			
		Fin Si
		total= suma+suma1
	Fin Para
	
	Escribir "La suma es", " " total
FinAlgoritmo
