#include <stdio.h>

int main()
{
    int idade;
    printf("---------------------------------------\n");
    printf("| Programa para verificação de idade! |\n");
    printf("---------------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (idade >= 0 && idade <= 10)
        {
            printf("crianca\n");
        }
        else if (idade >= 11 && idade <= 18)
        {
            printf("adolescente\n");
        }
        else if (idade >= 19 && idade <= 60)
        {
            printf("adulto\n");
        }
        else if (idade >= 61 && idade <= 100)
        {
            printf("idoso\n");
        }
        else
        {
            printf("Idade inválida\n");
        }
    }
    return 0;
}