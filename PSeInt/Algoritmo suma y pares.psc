//Algoritmo que pide números, suma y determina si son pares
Algoritmo Programa_suma_pares
	
	cont=0
	suma=0
	
	Escribir "Digitar numero"
	leer num
	Para n <-1 Hasta num Con Paso 1 Hacer
		Si n mod 2=0 Entonces
			suma=suma+n
			cont=cont+1
		SiNo
			
				Fin Si
				
	Fin Para
	Escribir "La suma es", suma,"y hay",cont,"numeros pares"
FinAlgoritmo
