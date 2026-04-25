#include <stdio.h>
#include <stdlib.h>

void decToBin(int n) {
    if (n == 0) {
        printf("Binario: 0\n");
        return;
    }
    
    int binario[32]; // Arreglo para guardar los residuos (bits)
    int i = 0;
    
    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    printf("Binario: ");
    // Imprimir en orden inverso para obtener el numero correcto
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
    int opcion;
    int numeroDecimal;
    char numeroBinario[65]; // Arreglo de caracteres para leer el binario
    int numeroHexadecimal;

    do {
        printf("\n--- CONVERSOR DE SISTEMAS NUMERICOS ---\n");
        printf("1.- Decimal a Binario\n");
        printf("2.- Binario a Decimal\n");
        printf("3.- Decimal a Hexadecimal\n");
        printf("4.- Hexadecimal a Decimal\n");
        printf("5.- Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese un numero decimal (entero positivo): ");
                scanf("%d", &numeroDecimal);
                decToBin(numeroDecimal);
                break;
                
            case 2:
                printf("Ingrese un numero binario (ej. 1011): ");
                scanf("%s", numeroBinario);
                // strtol convierte una cadena (string) a un numero en la base especificada (2)
                long decimalConvertido = strtol(numeroBinario, NULL, 2);
                printf("Decimal: %ld\n", decimalConvertido);
                break;
                
            case 3:
                printf("Ingrese un numero decimal: ");
                scanf("%d", &numeroDecimal);
                // %X formatea e imprime automaticamente el entero como Hexadecimal en mayusculas
                printf("Hexadecimal: %X\n", numeroDecimal);
                break;
                
            case 4:
                printf("Ingrese un numero hexadecimal (ej. 1A, FF): ");
                // %x lee directamente la entrada asumiendo que es hexadecimal
                scanf("%x", &numeroHexadecimal);
                printf("Decimal: %d\n", numeroHexadecimal);
                break;
                
            case 5:
                printf("Saliendo del programa...\n");
                break;
                
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}