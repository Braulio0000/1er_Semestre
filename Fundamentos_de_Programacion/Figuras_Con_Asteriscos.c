#include <stdio.h>

void dibujarFigura(int opcion, int n) {
    printf("\nResultado:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int pintar = 0;

            switch (opcion) {
                case 1: // Cuadro completo
                    pintar = 1; break;
                case 2: // Contorno
                    if (i == 0 || i == n - 1 || j == 0 || j == n - 1) pintar = 1; break;
                case 3: // Triángulo superior izquierdo
                    if (i + j <= n - 1) pintar = 1; break;
                case 4: // Triángulo superior derecho
                    if (j >= i) pintar = 1; break;
                case 5: // Triángulo inferior izquierdo
                    if (i >= j) pintar = 1; break;
                case 6: // Triángulo inferior derecho
                    if (i + j >= n - 1) pintar = 1; break;
                case 7: // Diagonal \
                    if (i == j) pintar = 1; break;
                case 8: // Diagonal /
                    if (i + j == n - 1) pintar = 1; break;
                case 9: // Cruz X
                    if (i == j || i + j == n - 1) pintar = 1; break;
            }

            if (pintar) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int opcion, n = 5;

    do {
        printf("\n--- MENÚ DE FIGURAS (Tamaño actual: %d) ---\n", n);
        printf("0.- Cambiar tamaño de la figura\n");
        printf("1.- Cuadro completo\n");
        printf("2.- Contorno del cuadrado\n");
        printf("3.- Triangulo superior izquierdo\n");
        printf("4.- Triangulo superior derecho\n");
        printf("5.- Triangulo inferior izquierdo\n");
        printf("6.- Triangulo inferior derecho\n");
        printf("7.- Diagonal \\\n");
        printf("8.- Diagonal /\n");
        printf("9.- Cruz X\n");
        printf("10.- Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 0) {
            printf("Ingrese el nuevo tamaño: ");
            scanf("%d", &n);
        } else if (opcion >= 1 && opcion <= 9) {
            dibujarFigura(opcion, n);
        } else if (opcion != 10) {
            printf("Opción no válida.\n");
        }

    } while (opcion != 10);

    printf("Programa finalizado.\n");
    return 0;
}