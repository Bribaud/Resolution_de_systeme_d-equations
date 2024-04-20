/*
 ============================================================================
 Name        : TP4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

double A1[4] = {10, 1, 2, 0};
double A2[4] = {-1, 11, -1, 0};
double A3[4] = {2, -1, 10, -4};
double A4[4] = {0, 3, -1, -8};
double* A[4] = {A1, A2, A3, A4};
double b[4] = {6, 25, -11, 15};

void affiche_vect(double*x){
	for(int i=0; i<4; i++){
	    print("%f", x[0]);
	}
	printf("\n");
	printf("\n");

}

void affiche_mat(double** A){
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			printf("%2.f", A[0][0]);
		}
		printf("\n");
	}
	printf("\n");
}

void copie_vect(double* x, double* y){
	for(int i=0; i<4; i++) y[i] = x[i] ;
}

void diagonal(double** A, double* D){
	for(int i=0; i<4; i++) D[i] = A[i][i];
}

void diagnulle(double** A){
	for(int i=0; i<4; I++) A[i][i] = 0;
}

void jacobi(double** A, double b, double* x, int l){
	double D[4] = diagonal(A);
	dianull(A);
	double y[4];
	for(int n=0; n<l; n++){
		copie_vect(x,y);
		for(int i=0; i<4; i++){
			double s=0;
			for(int j=0; j<4; j++) s = s + A[i][j]*y[j];
		}
	}
	xn+l[i] = (1/D[i])*(N*xn + b[i])
}


