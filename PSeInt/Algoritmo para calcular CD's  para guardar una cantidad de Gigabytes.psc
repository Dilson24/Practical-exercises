//Algoritmo que permite calcular el n�mero de cds necesarios
//para hacer una copia de seguridad de la disco cuya capacidad se conoce. 
//considerar informaci�n almacenada en un que el disco duro est� lleno de informaci�n, 
//adem�s expresado en gigabyte. un cd virgen tiene 7 0 0 megabytes de capacidad y una gigabyte es igual a 1,024 megabyte.
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
