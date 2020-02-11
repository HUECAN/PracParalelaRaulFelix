#include <stdio.h> // libreria de cabecera standard input output header
#include <stdlib.h> //Libreria  standard de cabecera  para gestion de memoria dinamica 

#define N 8 //declaracion de constante
float reducevector (float *a, int size) { //Creamos la funcion reduce que recibe un vector como  puntero a y un entero size
	float aux = 0.0f;

        for(int i=0; i < size; ++i) {
                aux =aux + a[i];
        }
	return aux;
        }


int main() {

	float *h_a, *h_b, *h_c; // declaramos punteros (vectores dinamicos)
	
	h_a = (float *) malloc (N*sizeof(float)); //Asignamos tamaño al vector dinamico
	if (h_a == NULL) {//controlamos erroes en asignacion de memoria
		fprintf(stderr, "Error al reservar memoria\n");
		return -1;
	}

		
	for(int i=0; i<N; ++i) {//rellenamos vectore h_a
		h_a[i] =  1.0f;
	
	}
	
	

	printf("El resultado de la reduccion es %f ", reducevector(h_a,N));
	
	printf("\n");

	free (h_a);
	return 0;

}

