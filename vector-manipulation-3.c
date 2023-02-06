/* Faça um programa que leia e armazene dois vetores a e b com 5 elementos cada e apresente o resultado
de: */

#include <stdio.h>
int main()
{
    int a[5], b[5], i, somatoria = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Qual o valor de a[%d]?\n ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Qual o valor de b[%d]?\n ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 5; i++)
        somatoria = somatoria + a[i] + b[4 - i];

    printf("\nA somatoria vale:%d ", somatoria);

    getch();
}