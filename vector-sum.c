/* Faça um programa que leia 5 valores inteiros, armazeno-os em um vetor, calcule e apresente a soma
destes valores. */

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() // funcao principal
{
    setlocale(LC_ALL, "portuguese");
    int valor[5], i, soma = 0; // Declaracao do vetor valor com 5 posições, variável i, variável soma igual 0

    for (i = 0; i < 5; i++) // laço de repetição que ler os valores digitados e realiza a soma de todos os valores do vetor valor
    {
        printf("Qual o %d valor?\n ", i + 1);
        scanf("%d", &valor[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Vetor: %d/n", valor[i]);
        soma = soma + valor[i];
    }

    printf("A soma vale: %d", soma); // exibe a soma dos valores

    getch();
}