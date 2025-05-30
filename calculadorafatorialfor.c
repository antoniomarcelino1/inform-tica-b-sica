#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero;
    int fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%i", &numero);

    if(numero < 0){
        printf("numero invalido! digite um numero inteiro que nao seja negativo.\n");
    }else {
    for(int i = 1; i <= numero; i = i + 1){
        fatorial *= i;
    }
    printf("0 fatorial de %i eh %i\n", numero, fatorial);

    }
 return 0;
}
