// 2. Direcione o endereço de um número real para um ponteiro, e faça que o ponteiro mostre o valor da variável indiretamente.

#include <stdio.h>  // biblioteca que faz a inclusãoo dos protótipos das funções de entrada/saída
#include <stdlib.h> // biblioteca de funções de uso geral
#include <locale.h> // biblioteca que garante que caracteres como ç e acentuação sejam exibidos normalmente em nosso programa.

main()
{
    setlocale(LC_ALL, "portuguese"); //suporte ao idioma português no programa

    int x = 8; //declaração da variável x do tipo inteiro
    int *pont = &x; //declaração de ponteiro do tipo inteiro que aponta para o endereço de x
    printf("O valor da variável x acessada indiretamente pelo ponteiro é %d\n", *pont);// exibe na tela o valor da variável x acessada pelo ponteiro

    system("pause");
}