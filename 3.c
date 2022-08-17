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

void distanciaPuntos(){
	int x1, x2, y1, y2;
	float DISTANCIA;
	
	printf("Ingrese las coordenadas del primer punto (x1,y1): ");
	scanf("%d %d", &x1, &y1);
	printf("\nIngrese las coordenadas del segundo punto (x2,y2): ");
	scanf("%d %d", &x2, &y2);
	DISTANCIA=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("\nLa distancia entre los dos puntos es de : %f\n", DISTANCIA);
	
}

void main(){
	distanciaPuntos();
}

