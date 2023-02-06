#include <stdio.h>

int main() {
  FILE *fp;
  char nome[100];
  int turma, nota;

  printf("Digite o nome do aluno: ");
  scanf("%s", nome);
  printf("Digite a turma do aluno: ");
  scanf("%d", &turma);
  printf("Digite a nota do aluno: ");
  scanf("%d", &nota);

  fp = fopen("notas.txt", "w");
  if (fp == NULL) {
    printf("Erro ao abrir o arquivo.");
    return 1;
  }

  fprintf(fp, "Nome: %s\nTurma: %d\nNota: %d\n", nome, turma, nota);

  fclose(fp);
  printf("Dados escritos com sucesso em notas.txt");

  return 0;
}
