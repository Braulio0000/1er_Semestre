#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arreglo[10];
    int numeroBuscado, encontrado;
    char respuesta;

    srand(time(NULL));

    // 1. Llenar el arreglo con números aleatorios entre 0 y 99
    printf("Arreglo generado (oculto en un programa real, pero mostrado aqui para probar):\n");
    for (int i = 0; i < 10; i++) {
        arreglo[i] = rand() % 100;
        printf("[%d] ", arreglo[i]);
    }
    printf("\n");

    // 2. Ciclo principal de búsqueda
    do {
        printf("\nIngrese el numero que desea buscar (0-99): ");
        scanf("%d", &numeroBuscado);

        encontrado = 0; 
        
        // Búsqueda lineal en el arreglo
        for (int i = 0; i < 10; i++) {
            if (arreglo[i] == numeroBuscado) {
                printf("¡Encontrado! El numero %d esta en la posicion (indice) %d.\n", numeroBuscado, i);
                encontrado = 1;
                break; // Salimos del for al encontrar la primera coincidencia
            }
        }

        // Si la bandera sigue en 0, es que el número nunca se encontró
        if (encontrado == 0) {
            printf("El numero %d no se encuentra en el arreglo.\n", numeroBuscado);
        }

    
        printf("\n¿Desea buscar otro numero? (s/n): ");
        scanf(" %c", &respuesta); // El espacio antes de %c es clave para limpiar el salto de línea (Enter) previo

    } while (respuesta == 's' || respuesta == 'S');

    printf("Programa finalizado.\n");

    return 0;
}