#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero;

    printf("Digite um numero de 1 a 12: ");
    scanf("%i", &numero);

    switch(numero) {
        case 1:
            printf("mes de Janeiro\n");
            break;
        case 2:
            printf("mes de Fevereiro\n");
            break;
        case 3:
            printf("mes de Marco\n");
            break;
        case 4:
            printf("mes de Abril\n");
            break;
        case 5:
            printf("mes de Maio\n");
            break;
        case 6:
            printf("mes de Junho\n");
            break;
        case 7:
            printf("mes de Julho\n");
            break;
        case 8:
            printf("mes de Agosto\n");
            break;
        case 9:
            printf("mes de Setembro\n");
            break;
        case 10:
            printf("mes de Outubro\n");
            break;
        case 11:
            printf("mes de Novembro\n");
            break;
        case 12:
            printf("mes de Dezembro\n");
            break;
            default:
                printf("Numero invlalido");
    }

    return 0;
}
