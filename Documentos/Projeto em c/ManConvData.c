#include <stdio.h>
int main()
{
    //Declarando os tipos de notas.
    int notaAv, notaAvp, pontoExtra;
    int media;
    
    media = notaAv + notaAvp + pontoExtra / 3;

    printf("Digite a nota da avalição: \n", notaAv);
    scanf("%d", &notaAv);
    
    printf("Digite a nota da avalição parcial: \n", notaAvp);
    scanf("%d", &notaAvp);
    
    printf("Digite a nota da avalição: \n", pontoExtra);
    scanf("%d", &pontoExtra);
    
    media  = (notaAv + notaAvp + pontoExtra) / 3;
    printf(" A media é: %d", media);
}