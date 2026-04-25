#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANO 10

int main() {
    int vector1[TAMANO];
    int vector2[TAMANO];
    int resultado[TAMANO];

    srand(time(NULL));

    // Llenar los vectores con números aleatorios del 1 al 100 y sumar
    for (int i = 0; i < TAMANO; i++) {
        vector1[i] = (rand() % 100) + 1; // Genera del 1 al 100
        vector2[i] = (rand() % 100) + 1;
        
        // Guardar la suma en el tercer vector
        resultado[i] = vector1[i] + vector2[i];
    }

    // Mostrar los tres vectores en forma vertical (columnas)
    printf("V1\t+\tV2\t=\tResultado\n");
    printf("-----------------------------------------\n");
    for (int i = 0; i < TAMANO; i++) {
        printf("%d\t+\t%d\t=\t%d\n", vector1[i], vector2[i], resultado[i]);
    }

    return 0;
}