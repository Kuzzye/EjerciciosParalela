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

int valorMat(){
	int x;
	printf("Ingrese el tamaño N de la matriz (maximo 7): ");
	scanf("%d", &x);

	while(x<1 || x>7 ){
	printf("Por favor ingrese un tamaño valido!");
	printf("\nTamaño: ");
	scanf("%d",&x);
	}
	
	return x;
}

void matrizUno(int size){
	int i, a;
	int matriz[size][size];		
	
	for(i=0; i<size; i++){
		for(a=0; a<size; a++){
			matriz[i][a]=1;
		}
	}
	
	for(i=0; i<size; i++){
		for(a=0; a<size; a++){
			printf("%d ", matriz[i][a]);
		}
		printf("\n");
	}
}

void main(){
	matrizUno(valorMat());
}

