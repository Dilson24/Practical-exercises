//Algoritmo que permita ingresar el número de partidos ganados, perdidos y empatados, por algún equipo en el torneo apertura, 
//se debe de mostrar su puntaje total, teniendo en cuenta que por cada partido ganado obtendrá 3 puntos, empatado 1 punto y perdido 0 puntos
Algoritmo Rendimiento
	//Leer el datos
	Definir PG,PP,PE Como Entero
	Definir Ptse, Ptsg, Pts, Part Como Entero
	Definir Eq Como Caracter
	Escribir "Ingrese el nombre del equipo"
	Leer Eq
	Escribir "Ingrese partidos ganados"
	Leer PG
	Escribir  "Ingrese partidos perdiods"
	Leer PP
	Escribir "Ingrese partidos empatados"
	Leer PE
	//controlar que sea valido para convertir
	SePuedeConvertir <-Verdadero
	Si Numero<>trunc(numero) Entonces
		Escribir"El numero debe ser entero"
		SePuedeConvertir<-Falso 
	FinSi
	Si Numero< 0 Entonces
		Escribir "Debe ser positivo"
		SePuedeConvertir <-Falso 
	FinSi
	//realizar la conversion
	Ptsg <- PG * 3
	Ptse <- PE * 1
	Pts <- Ptsg + Ptse
	Part <- PG + PP + PE
	Escribir  "El equipo:   " , Eq, " Jugo  " , Part , " Partidos "
	Escribir  "Gano ", PG , " Partidos "
	Escribir  "Perdio ", PP , " Partidos "
	Escribir  "Puntos acumulados:  ", Pts
	
FinAlgoritmo
