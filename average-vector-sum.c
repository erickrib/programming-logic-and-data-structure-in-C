/*
Altere o programa anterior para calcular e apresentar a média dos valores entrados e aqueles que são
maiores e menores que a média. */

#include <stdio.h>
#include <conio.h>
#include <locale.h> // inclusão do header que permite a exibição dos caracteres em português

int main()
{
    setlocale(LC_ALL, "portuguese");
    int valor[5], i, soma = 0; // Declaracao do vetor valor com 5 posições, variável i, variável soma igual 0
    float media;               // declaracao da variavel media

    for (i = 0; i < 5; i++)
    {
        printf("Qual o %do valor?\n ", i + 1);
        scanf("%d", &valor[i]);
        soma = soma + valor[i];

        if (i == 4)
            media = soma / 5.;
    }

    printf("A media vale: %.2f", media);

    printf("\nOs seguintes valores sao maiores que a media:\n");
    for (i = 0; i < 5; i++)
    {
        if (valor[i] > media)
            printf("%d\n", valor[i]);
        printf("\nOs seguintes valores sao menores que a media:\n");
        if (valor[i] < media)
            printf("%d\n", valor[i]);
    }
    getch();
}