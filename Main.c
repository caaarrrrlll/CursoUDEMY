//Practica12
#include <stdio.h>
#include <stdlib.h>

int main (){

    int vector[10] = {2, 14, 24, 28, 45,-2, 39, 89, 99, 12};
    int maximo = vector[0];
    int minimo = vector[0]; 

    for (int i = 1; i <10; i++){
        if (vector[i]>maximo){
            maximo = vector[i];

        }

        if (vector[i] < minimo ){
            minimo = vector[i];
        }
    }

    printf("El Valor Maximo: %i\n", maximo);
    printf("El valor Minimo: %i\n", minimo);
}