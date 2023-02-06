/* Escreva um programa que receba como entrada o numero de alunos de uma
disciplina. O programa deve alocar dinamicamente em uma estrutura para
armazenar as informações a respeito desses alunos: nome do aluno e sua nota
final. Use nomes com no máximo 40 caracteres. Em seguida, salve os dados dos
alunos em um arquivo binário. Por fim, leia o arquivo e mostre o nome do aluno
com a maior nota. */

#include <stdio.h>  // biblioteca que faz a inclusãoo dos protótipos das funções de entrada/saída
#include <stdlib.h> // biblioteca de funções de uso geral
#include <string.h> // biblioteca que contém protótipos utilizados para a manipulação de strings
#include <locale.h> // biblioteca que garante que caracteres como ç e acentuação sejam exibidos normalmente em nosso programa

#define TAM_MAX 40

typedef struct Aluno // declaração de uma STRUCT para armazenar os dados do aluno
{
    char nome[TAM_MAX];
    float notaFinal;
} Aluno;

void ler_aluno(Aluno *a, int i) // função ler dados do aluno
{

    printf("\nAluno %d", i + 1);
    printf("\nNome do Aluno: ");
    fflush(stdin);

    gets(a->nome);

    printf("Nota Final: ");
    scanf("%f", &a->notaFinal);
}

void grava_aluno(Aluno a, FILE *arquivo) // gravar dados do aluno no arquivo
{
    fwrite(&a, sizeof(a), 1, arquivo);
}

int main()
{
    setlocale(LC_ALL, "portuguese"); // suporte ao idioma português no programa
    int i, numeroDeAlunos;
    float maiorNota = 0;
    char nomeMaiorNota[TAM_MAX];

    printf("Quantos alunos possui a disciplina? ");
    scanf("%d", &numeroDeAlunos); // recebe do usuário a quantidade de alunos por disciplina

    Aluno alunos[numeroDeAlunos]; // declarão de vetor de struct
    Aluno alunosLeitura;

    for (i = 0; i < numeroDeAlunos; i++) // laço de repetição para leitura dos alunos
    {
        ler_aluno(&alunos[i], i);
    }

    printf("----------------------------------\n");
    FILE *arquivo = fopen("dados.bin", "wb"); // cria um arquivo para escrita

    if (arquivo == NULL) // teste se o arquivo foi realmente aberto
    {
        printf("Não foi possível abrir o arquivo!\n");
        exit(1);
    }

    for (i = 0; i < numeroDeAlunos; i++) // laço de repetição para gravar dados dos alunos no arquivo
    {
        grava_aluno(alunos[i], arquivo);
    }

    fclose(arquivo); // fecha arquivo
    printf(" Dados gravados com sucesso! \n\n");

    arquivo = fopen("dados.bin", "rb"); // abre um arquivo para leitura

    printf("---------------------------------------\n");
    printf("     Lista de alunos da disciplina:    \n");
    printf("---------------------------------------\n");
    printf("\tAlunos\t\tNota Final\t\n");

    if (arquivo == NULL) // teste se o arquivo foi realmente aberto
    {
        printf("Não foi possível abrir o arquivo!\n");
        exit(1);
    }

    while (1)
    {
        fread(&alunosLeitura, sizeof(alunosLeitura), 1, arquivo);
        if (feof(arquivo))
        {
            break;
        }

        printf("\t%s\t", alunosLeitura.nome);
        printf("\t%.2f\t\n", alunosLeitura.notaFinal);
    }

    fclose(arquivo); // fechar arquivo

    for (i = 0; i < numeroDeAlunos; i++) // laço de repetição para verificar maior nota
    {
        if (maiorNota < alunos[i].notaFinal)
        {
            maiorNota = alunos[i].notaFinal;
            strcpy(nomeMaiorNota, alunos[i].nome);
        }
    }

    printf("\nA maior nota é %.2f do aluno %s\n", maiorNota, nomeMaiorNota);

    return 0;
}