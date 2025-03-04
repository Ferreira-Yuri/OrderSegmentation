#include <stdio.h>

int main()
{
    int idade;
    int quantidade = 1;
    float altura;
    char letra = 'Y';
    double peso = 60.7;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);
}