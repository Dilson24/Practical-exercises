//Se tiene registrado la producción (unidades) logradas por un operario a lo 
//largo de la semana (lunes a sábado). elabore un algoritmo que nos muestre o nos diga
//si el operario recibirá incentivos sabiendo que el promedio de producción mínima es de 100 unidades.
Algoritmo Insentivo
	Escribir "Indique el valor del producción a lo largo de la semana"
	leer ps
	Si ps >=100  Entonces
		escribir "El operario si recibe incentivo"
	SiNo
		escribir "El operario no recibe incentivo"
	Fin Si
FinAlgoritmo
