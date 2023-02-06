#include <stdio.h>
int main()
{
    double valorA, valorB,PROD, SOM, SUB, DIV;
    printf("Digite o primeiro valor: ");
    scanf("%lf", &valorA);
    printf("Digite o segundo valor: ");
    scanf("%lf", &valorB);
    SOM= valorA + valorB;
    SUB= valorA - valorB;
    PROD=valorA*valorB;
    DIV= valorA/valorB;
    printf("Resultado : %.1lf x %.1lf = %.1lf\n", valorA, valorB, PROD);
    printf("Resultado : %.1lf + %.1lf = %.1lf\n", valorA, valorB, SOM);
    printf("Resultado : %.1lf / %.1lf = %.1lf\n", valorA, valorB, DIV);
    printf("Resultado : %.1lf - %.1lf = %.1lf\n", valorA, valorB, SUB);
}
