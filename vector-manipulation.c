#include <stdio.h>
#define TAM_MAX 10
int main()
{
    int Vetor[5]; // declara um vetor de 5 posições
    int i;
    int Maior;
    int Matriz[5][3]; // declara uma matriz de 5 linhas e 3 colunas
    double VetReais[TAM_MAX], VetCopia[TAM_MAX];
    Vetor[0] = 9;      // coloca 9 na primeira posição do vetor
    Vetor[4] = 30;     // coloca 30 na última posição do vetor
    Matriz[0][1] = 15; // coloca 15 na célula que está na primeira linha
                       // e na segunda coluna da matriz
    printf("%d\n", Vetor[0]);
    printf("%d\n", Vetor[4]);
    printf("%d\n", Matriz[0][1]);

    // Preenchimento de um vetor com um dado
    for (i = 0; i < 5; i++)
        Vetor[i] = 30;
    printf("%d\n", Vetor[i]);

    // Colocar os números de 1 a 5 em Vetor
    for (i = 0; i < 5; i++)
        Vetor[i] = i + 1;
    printf("%d\n", Vetor[i]);

    // Colocar os números de 5 a 1 em Vetor
    for (i = 0; i < 5; i++)
        Vetor[i] = 5 - i;
    printf("%d\n", Vetor[i]);

    // Uso de Constantes para definir o tamanho de um vetor
    for (i = 0; i < TAM_MAX; i++)
        VetReais[i] = TAM_MAX - i; // coloca 5,4,3,2,1 no vetor
    printf("%d\n", VetReais[i]);

    // Copiar os dados de um vetor para outro
    for (i = 0; i < TAM_MAX; i++)
        VetCopia[i] = VetReais[i]; // Copia os dados de um vetor para outro
    printf("%d\n", VetCopia[i]);

    // Copiar os dados de um VET1 para as primeiras 5 posições de COPIA e VET2 para as outras 5
    double Vet1[TAM_MAX], Vet2[TAM_MAX];
    for (i = 0; i < TAM_MAX; i++) // Copia os dados do segundo vetor
        VetCopia[i + TAM_MAX * 2] = Vet2[i];
    printf("%d\n", VetCopia[i]);

    // Leitura dos dados de um um vetor
    for (i = 0; i < TAM_MAX; i++)
        scanf("%lf\n\n", &Vet1[i]); // le os   dados
    printf("%d", Vet1[i]);
    // Encontrar o maior valor dentro de um vetor
    Maior = Vet1[0]; // assume que o primeiro é o maior
    for (i = 0; i < TAM_MAX; i++)
        if (Vet1[i] > Maior)
            Maior = Vet1[i];
    printf("O maior elemento e %lf\n", Maior);
}