#include <stdio.h>

int main(){
 int idade;
 printf ("Digite a idade: ");
 scanf("%d", &idade);
 switch(idade){
     case 0 ... 10: printf("crianca"); break;
     case 11 ... 18: printf("adulto"); break;
     case 19 ... 60: printf("idoso"); break;
     case 61 ... 100: printf("zumbi"); break;
     default: printf("Idade invalida");
     
 }
}

