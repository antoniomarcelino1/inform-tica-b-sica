#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

     printf("Digite o primeiro numero: ");
     scanf("%f", &num2);

     switch(operacao){
    case '+':
         resultado = num1 + num2;
         printf("Resultado: %.f\n", resultado);
     break;
     case '-':
         resultado = num1 - num2;
         printf("Resultado: %.f\n", resultado);
     break;
     case '*':
     resultado = num1 * num2;
         printf("Resultado: %.f\n", resultado);
     break;
     case '/':
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.f\n", resultado);
        } else {
            printf("Erro: Divisao por zero");
        }
     }

     return 0;
}
