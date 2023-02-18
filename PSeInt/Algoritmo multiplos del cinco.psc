//Algoritmo para identificar los multiplos de 5 de un número ingresado
Algoritmo Multiplos_del_cinco
	Escribir "DIGITE UN NUMERO"
	LEER NUM
	Para N<-1 Hasta NUM Con Paso 1 Hacer
		SUMA=SUMA+N
		Si N MOD 5=0 Entonces
			Escribir"MULTIPLO DE 5 DEL NUMERO INGRESADO  ES"     ,N
			
		SiNo
			
		Fin Si
	Fin Para
FinAlgoritmo
