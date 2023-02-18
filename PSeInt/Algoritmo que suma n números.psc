//Algoritmo que pide una cantidad de números para sumar y da el resultado de los números
Proceso Exercise
	Definir cant, n, suma, i Como Entero;
	n<-0;
	suma<-0;
	cant<-0;
	i<-1;
	Escribir "Ingrese la cantidad de numeros a sumar";
	Leer cant;
	Para i<-1 Hasta cant Con Paso 1 Hacer
		Escribir "Ingresar el ",i," numero";
		Leer n;
		suma<-suma+n;
	FinPara
	Escribir "La suma de los numeros es: ",suma;
FinProceso
