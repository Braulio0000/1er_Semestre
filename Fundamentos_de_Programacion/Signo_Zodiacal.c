#include <stdio.h>

int main() {
    int dia, mes;

    // 1. Solicitud de datos
    printf("--- Determinador de Signo Zodiacal ---\n");
    printf("Introduce tu dia de nacimiento (1-31): ");
    scanf("%d", &dia);
    printf("Introduce tu mes de nacimiento (1-12): ");
    scanf("%d", &mes);

    printf("\nTu signo zodiacal es: ");

    switch (mes) {
        case 1: // Enero
            if (dia <= 22) printf("Capricornio\n");
            else printf("Acuario\n");
            break;
            
        case 2: // Febrero
            if (dia <= 20) printf("Acuario\n");
            else printf("Piscis\n");
            break;
            
        case 3: // Marzo
            if (dia <= 20) printf("Piscis\n");
            else printf("Aries\n");
            break;
            
        case 4: // Abril
            if (dia <= 19) printf("Aries\n");
            else printf("Tauro\n");
            break;
            
        case 5: // Mayo
            if (dia <= 20) printf("Tauro\n");
            else printf("Géminis\n");
            break;
            
        case 6: // Junio
            if (dia <= 20) printf("Géminis\n");
            else printf("Cáncer\n");
            break;
            
        case 7: // Julio
            if (dia <= 20) printf("Cáncer\n");
            else printf("Leo\n");
            break;
            
        case 8: // Agosto
            if (dia <= 22) printf("Leo\n");
            else printf("Virgo\n");
            break;
            
        case 9: // Septiembre
            if (dia <= 23) printf("Virgo\n");
            else printf("Libra\n");
            break;
            
        case 10: // Octubre
            if (dia <= 23) printf("Libra\n");
            else printf("Escorpio\n");
            break;
            
        case 11: // Noviembre
            if (dia <= 22) printf("Escorpio\n");
            else printf("Sagitario\n");
            break;
            
        case 12: // Diciembre
            if (dia <= 22) printf("Sagitario\n");
            else printf("Capricornio\n");
            break;
            
        default:
            printf("Mes invalido. Por favor ingresa un mes del 1 al 12.\n");
            break;
    }

    return 0;
}