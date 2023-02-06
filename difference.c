#include <stdio.h>

int main() {
	int A, B, C, D, difference;
	printf("Digite o primeiro valor: ");
	scanf("%d", &A);
	printf("Digite o segundo valor: ");
	scanf("%d", &B);
	printf("Digite o terceiro valor: ");
	scanf("%d", &C);
	printf("Digite o quarto valor: ");
	scanf("%d", &D);
	difference = A * B - C * D;
	printf("DIFERENÇA = %d\n",difference);
}
