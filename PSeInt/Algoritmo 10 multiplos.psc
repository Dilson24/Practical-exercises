//Algoritmo que permita la entrada de un número, el cúal genera sus primeros 10 multiplos
Proceso Exercise
	Definir num,i,resul Como Entero;
	num<-0;
	resul<-1;
	Escribir "Ingrese un numero";
	Leer num;
	Para i<-0 Hasta 10 Con Paso 1 Hacer
		resul<-num*i;
		Escribir "- ",num," * ",i," = ",resul;
	FinPara
FinProceso
