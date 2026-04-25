#include <stdio.h>

int main() {
    float a, b, c, temp;

    // 1. Lectura de datos
    printf("Introduce el primer numero: ");
    scanf("%f", &a);
    printf("Introduce el segundo numero: ");
    scanf("%f", &b);
    printf("Introduce el tercer numero: ");
    scanf("%f", &c);
    
    // Comparar a y b: asegurar que el menor este en 'a'
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Comparar a y c: asegurar que el menor absoluto este en 'a'
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    // Comparar b y c: ordenar los dos restantes
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // 3. Mostrar resultados
    printf("\nNumeros ordenados de menor a mayor: %.2f, %.2f, %.2f\n", a, b, c);

    return 0;
}