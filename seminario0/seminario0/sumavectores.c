#include <stdio.h> // libreria de cabecera standard input output header
#include <stdlib.h> //Libreria  standard de cabecera  para gestion de memoria dinamica 

#define N 8 //declaracion de constante

int main() {

	float *h_a, *h_b, *h_c; // declaramos punteros (vectores dinamicos)
	
	h_a = (float *) malloc (N*sizeof(float)); //Asignamos tamaño al vector dinamico
	if (h_a == NULL) {//controlamos erroes en asignacion de memoria
		fprintf(stderr, "Error al reservar memoria\n");
		return -1;
	}

	
	h_b = (float *) malloc (N*sizeof(float));

	if (h_b == NULL) {

		fprintf(stderr, "Error al reservar memoria\n");

		return -1;
	}


	h_c = (float *) malloc (N*sizeof(float));

	if (h_c == NULL) {

		fprintf(stderr, "Error al reservar memoria\n");

		return -1;
	}

	for(int i=0; i<N; ++i) {//rellenamos los 3 vectores
		h_a[i] = h_b[i] =  1.0f;
		h_c[i] = 0.0f;
	}

	for(int i=0; i<N; ++i) {
		h_c[i] = h_a[i] + h_b[i];
	}

	
	for(int i=0; i<N; ++i) {
		printf("%f, ", h_c[i]);
	}
	printf("\n");


	return 0;

}
