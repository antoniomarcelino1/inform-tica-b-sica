#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%i %i", &a, &b);

    if(a > b) {
        printf("O maior numero e %i", a);
        } else if (b > a ){
           printf ("O maior numero e %i", b);
           } else {
            printf("Os dois numeors sao iguais \n");
           }

            return 0;
}
