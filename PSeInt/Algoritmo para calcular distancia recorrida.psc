//Algoritmo para calcular la distancia recorrida (m) por un móvil que tiene velocidad constante (m/s) 
//durante un tiempo t (sg), considerar que es un mru
Algoritmo Velocidad_Constante
	Definir velocidad,tiempo,distancia Como Real
	Escribir "Ingresa la velocidad en km x minutos"
	Leer velocidad
	Escribir "Ingresa el tiempo en minutos"
	Leer tiempo
	
	distancia = velocidad * tiempo
	
Escribir "La distancia recorrida por el automóvil es: ",distancia," km"
	
FinAlgoritmo