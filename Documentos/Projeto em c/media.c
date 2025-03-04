#include <stdio.h>
int main()
{
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Informe a sua matricula: \n");
    scanf("%d", &matricula);

    printf(" Nome do aluno: %s\n Matricula: %d\n", nome, matricula);
    printf(" Idade %d \n Altura: %f", idade, altura); 

    return 0;


}