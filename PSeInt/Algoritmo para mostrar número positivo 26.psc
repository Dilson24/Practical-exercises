//Algoritmo que sólo permita el ingreso de un número, al final mostrarlo como negativo

Proceso Punto26
	Definir num,conv Como Entero;
	num<-0;
	conv<-0;
	Mientras num>=0 & num<=0 Hacer
		Escribir "Ingrese un numero";
		Leer num;
		Si num>=0 Entonces
			conv<-num*(-1);
			Escribir "RESULTADO: ",conv;
		SiNo
			Escribir "RESULTADO: ",num;
		FinSi
	FinMientras
FinProceso
