#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;

    printf("digite um numero para ver a sua tabuada: ");
    scanf("%i", &numero);

    printf("tabuada do %i:\n", numero);
    for(int i = 1; i <= 10; i = i + 1){
        printf("%i x %i = %i.\n", numero, i, numero * i);
    }

    return 0;
}
