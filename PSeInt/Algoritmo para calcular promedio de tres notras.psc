//Algoritmo para obtener el promedio simple de un estudiante a partir de sus tres notas parciales.
Algoritmo Calcular
	//Leer el numero
	Escribir "Cual es tu nombre"
	Leer nombre
	Escribir "Asignatura a calular"
	Leer Asignatura
	Escribir "Ingrese las notas acontinuacion"
	Definir a,b,c,promedio Como Real
	Leer a,b,c
	//Controlar que sea valido para convertir
	SePuedeConvertir <-Verdadero
	Si Numero> 11 Entonces
		
		Escribir "El numero excede la calificacion"
		SePuedeConvertir <-Falso
	FinSi
	Si Numero< 0 Entonces
		Escribir "El numero debe ser positivo"
		SePuedeConvertir <-Falso 
	FinSi
	//realizar la conversion
    promedio = (a+b+c)/5
	
	Escribir "El pormedio de las 3 calificaciones es"
	Escribir promedio
FinAlgoritmo
