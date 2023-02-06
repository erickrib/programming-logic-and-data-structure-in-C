//Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. 
//Se n�o for poss�vel calcular as ra�zes, mostre a mensagem correspondente �Impossivel calcular�, 
//caso haja uma divis�o por 0 ou raiz de numero negativo.

#include <stdio.h>
#include <math.h>

int main(){
	float valorA, valorB, valorC, delta, R1, R2;
	printf("Vamos calcular a formula de Baskara\nDigite o valor de A: ");
	scanf("%f", &valorA);
	printf("Digite o valor de B: ");
	scanf("%f", &valorB);
	printf("Digite o valor de C: ");
	scanf("%f", &valorC);
	delta = pow(valorB, 2)-4*valorA*valorC;
	if (valorA == 0 || sqrt(delta) < 0){
		printf("Impossivel Calcular!");
	} else{
		R1 = (-valorB-sqrt(delta))/(2*valorA);
		R2 = (-valorB+sqrt(delta))/(2*valorA);
		
		printf("R1 = %f", R1);
		printf("R2 = %f", R2);
	}
}
