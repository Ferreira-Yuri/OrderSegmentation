#include <stdio.h>
int main()
{
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    //operação de soma
    soma = numero1 + numero2;

    //operação de subrtração 
    subtracao = numero1 - numero2;

    // operação de multiplicação 
    multiplicacao = numero1 * numero2;

    // operação de divisão
    //divisao = numero1 / numero2;

    printf("Digite um número: \n");
    scanf("%d", &numero1);
    printf("Digite um segundo número: \n");
    scanf("%d", &numero2);

    printf("A soma é: %d\n:", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicacao é: %d\n", multiplicacao);
    printf("A divisao é: %d\n", divisao);



}