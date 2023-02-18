//Algoritmo que identifica los multiplos del tres de un número ingresado
Algoritmo Multiplos_del_tres
	Escribir "DIGITE UN NUMERO"
	LEER NUM
	Para N<-1 Hasta NUM Con Paso 1 Hacer
		SUMA=SUMA+N
		Si N MOD 3=0 Entonces
			Escribir"MULTIPLO DE 3 DEL NUMERO INGRESADO  ES"     ,N
			
		SiNo
		
		Fin Si
	Fin Para
FinAlgoritmo
