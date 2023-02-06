#include <stdio.h>

int main()
{
  float notaA, notaB, med;
  printf("Digite o valor da primeira nota: ");
  scanf("%f", &notaA);
  printf("Digite o valor da segunda nota: ");
  scanf("%f", &notaB);
  med = (notaA + notaB) / 2;
  if (med > 9.5)
  {
    printf("Parabens! Aprovado");
  }
  else
  {
    printf("Tente novamente! Reprovado");
  }
}
