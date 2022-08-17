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

void piramideAste(){
	int linea, i, a;
	printf("Ingrese el numero de niveles que desea que tenga la piramide (valor maximo es 14): ");
	scanf("%d",&linea);
	while(linea<1 || linea>14 ){
		printf("Por favor ingrese un numero valido!");
		printf("\nNumero: ");
		scanf("%d",&linea);
	}
	for(i=0; i<linea; i++){
		for(a=1; a<=(i+1); a++){
			printf("*");
		}
		printf("\n");
	}

}

void main(){
	piramideAste();
}

