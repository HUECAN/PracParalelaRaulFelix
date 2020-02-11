
#include <stdio.h> // libreria de cabecera standard input output header
#include <stdlib.h> //Libreria  standard de cabecera  para gestion de memoria dinamica 

#define N 8 //declaracion de constante
#define  NUM_ITERA 8

int main() {

	float *h_a, *h_b; // declaramos punteros (vectores dinamicos)
	
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


	
	for(int i=0; i<N; ++i) {//rellenamos los 2 vectores el primer y ultimo valor  a 150
              if ((i==0) | (i == (N-1))) {
		h_a[i] = 150.0f;
		h_b[i] = 150.0f;
		}
	      else {
		 
		h_a[i] = h_b[i] =  70.0f;
		}
	}
	for (int i=0; i<N; i++) {
		printf ("%f",h_a[i]);
		}
	float *aux = NULL;
	for (int i = 0; i < NUM_ITERA; i++) {

		for (int j = 1; j < (N-1); j++) { //Aplicamos la formula del enunciado
			h_b[j] = 0.3f * (h_a[j-1] + h_a[j] + h_a[j+1]);
		}
		aux = h_a;
		h_a = h_b;
		h_b = aux;
	}
	for (int i=0; i<N; i++) { // cOMPROBAMOS SI ES PAR O IMPAR PARA IMPRIMIR
	    float p = ((NUM_ITERA%2 == 0))?h_b[i]:h_a[i];
                printf ("%.2f",p);
        }

	printf("\n");


	return 0;
	free (h_a);
	free (h_b); //liberamos la memoria

}
