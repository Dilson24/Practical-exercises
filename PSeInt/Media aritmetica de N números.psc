//Algoritmo para determinar la media aritmetica de N números
Algoritmo Media_Aritmetica
	Definir x,n,num,media Como Real
	Escribir 'Digite el número de terminos'
	Leer n
	x=1
	Mientras x<=n Hacer
		Escribir 'Digite un número'
		Leer num
		media = media + num
		x=x+1
		
	FinMientras
	Escribir 'La media aritmetica de los números ingresados es,' media/n
	
	
FinAlgoritmo
