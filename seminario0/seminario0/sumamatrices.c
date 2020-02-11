#include <stdio.h> // libreria de cabecera standard input output header
#include <stdlib.h> //Libreria  standard de cabecera  para gestion de memoria dinamica 

#define N 8 //declaracion de constante
#define M 8 //otra constante para definir la otra dimension de la matriz
int main() {

	void inicializaMatrix(float *h_a,float  *h_b,float  *h_c) {

		for(int i=0; i<N; ++i) {//rellenamos los 3 matrices
			for(int j=0; j<M; ++j) {
				 int pos =i*M+j;
                        	 h_a[pos] = h_b[pos] =  1.0f;
               		 	 h_c[pos] = h_a[pos] + h_b[pos];
				 printf ("%f, ", h_c[pos]);
        		}

       		}
     		printf("\n");
		return;
	}

	float *h_a, *h_b, *h_c; // declaramos punteros (vectores dinamicos)
	
	h_a = (float *) malloc (N*M*sizeof(float)); //Asignamos tamaño al vector dinamico
	if (h_a == NULL) {//controlamos erroes en asignacion de memoria
		fprintf(stderr, "Error al reservar memoria\n");
		return -1;
	}

	
	h_b = (float *) malloc (N*M*sizeof(float));

	if (h_b == NULL) {

		fprintf(stderr, "Error al reservar memoria\n");

		return -1;
	}


	h_c = (float *) malloc (N*M*sizeof(float));

	if (h_c == NULL) {

		fprintf(stderr, "Error al reservar memoria\n");

		return -1;
	}
	inicializaMatrix(h_a,h_b,h_c);
	return 0;

}
