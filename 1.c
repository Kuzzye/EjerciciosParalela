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

void operacionMulti(){
	int a, b, ans;
	printf("Ingrese el valor del primer entero: ");
	scanf("%d", &a);
	printf("\nIngrese el valor del segundo entero: ");
	scanf("%d", &b);
	ans=a*b;
	printf("El producto entre los enteros anteriores es de: %d\n ",ans);
	
}

void main(){
	operacionMulti();
}
