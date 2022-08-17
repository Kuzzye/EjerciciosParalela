/***********************************************************
 * Fecha: 10-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: Parallel and Distributed Computing
 * Tema: Introducción Leguaje de Programación C
 * Tópico: Taller C
 * Fase 01: Producto entre dos enteros
 ***********************************************************/
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void convertirFecha(){
	int dd, yyyy, week, resul;
	printf("Ingrese el numero de dias a convertir: ");
	scanf("%d", &dd);
	
	yyyy=dd/365;
	week=(dd%365)/7;
	resul=(dd%365)%7;
	
	printf("Años: %d \nSemanas: %d \nDias: %d \n",yyyy, week, resul);
}

void main(){
	convertirFecha();
}

