//Algoritmo para determinar la media aritmetica de N n�meros
Algoritmo Media_Aritmetica
	Definir x,n,num,media Como Real
	Escribir 'Digite el n�mero de terminos'
	Leer n
	x=1
	Mientras x<=n Hacer
		Escribir 'Digite un n�mero'
		Leer num
		media = media + num
		x=x+1
		
	FinMientras
	Escribir 'La media aritmetica de los n�meros ingresados es,' media/n
	
	
FinAlgoritmo
