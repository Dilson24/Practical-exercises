//Algoritmo que permite calcular el número de cds necesarios
//para hacer una copia de seguridad de la disco cuya capacidad se conoce. 
//considerar información almacenada en un que el disco duro está lleno de información, 
//además expresado en gigabyte. un cd virgen tiene 7 0 0 megabytes de capacidad y una gigabyte es igual a 1,024 megabyte.
Algoritmo CDS
	//Leer el numero
	Definir Gb Como Real
	Escribir "Ingrese Gigabyte necesarios"
	Leer Gb
	//realizar la conversion
	Mg = Gb * 1024
	CD = TRUNC ((MG / 700) + 1)
	Escribir "Lo discos necesarios son:   " , CD 
FinAlgoritmo
