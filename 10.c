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

void matrizRandom2(int random[], int random2[], int size){
	int i, a;		
	srand(time(NULL));
	for(i=0; i<size; i++){
		for(a=0; a<size; a++){
			random[i+a*size]=rand()%10;
			random2[i+a*size]=rand()%10;

		}
	}
	printf("Matriz 1: \n");
	for(i=0; i<size; i++){
		for(a=0; a<size; a++){
			printf("%d ", random[i+a*size]);
		}
		printf("\n");
	}
	printf("Matriz 2: \n");
	for(i=0; i<size; i++){
		for(a=0; a<size; a++){
			printf("%d ", random2[i+a*size]);
		}
		printf("\n");
	}

}

void productoMatriz(int matrizA[],int matrizB[],int matrizC[], int N){
	int suma, i, j, k, a;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			suma=0;
			for(k=0; k<N;k++){
				suma+=matrizA[j+k*N]*matrizB[k+i*N];
			}
			matrizC[j+i*N]=suma;
		}
	}
	
	printf("Resultado de la multiplicacion: \n");
	for(i=0; i<N; i++){
		for(a=0; a<N; a++){
			printf("%d ", matrizC[i+a*N]);
		}
		printf("\n");
	}
	
}

void main(){
	int sizeM, total;
	sizeM=valorMat();
	total=sizeM*sizeM;
	int producto[total], a[total], b[total];					
	matrizRandom2(producto,a,sizeM);
	productoMatriz(producto, a, b, sizeM);
}

