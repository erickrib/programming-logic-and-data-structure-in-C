#include <stdio.h>

int main(void){
    float a,b,c,average;
    printf("Digite o valor da primeira nota: ");
    scanf("%f%", &a);
    printf("Digite o valor da segunda nota: ");
    scanf("%f%", &b);
    printf("Digite o valor da terceira nota: ");
    scanf("%f%", &c);
    average=(a*2.0+b*3.0+c*5.0)/10.0;
    printf("MEDIA = %.1f\n",average);
}
