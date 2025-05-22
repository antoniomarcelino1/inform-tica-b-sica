#include<stdio.h>
#include<stdlib.h>

int main () {
    int senha;

    printf("Digite a senha: ");
    scanf("%i", & senha);

    if(senha == 1234) {
        printf("Acesso permitido \n");
    } else {
        printf("Senha incorreta \n");
    }

    return 0;
}
