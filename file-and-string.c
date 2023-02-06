/* B - Escreva um programa em C que lê 5 frases de, no máximo, 50 caracteres cada
uma e armazene-as em um arquivo.
Antes de gravar cada frase no arquivo, é necessário converter todas as suas letras
para maiúsculas. O nome do arquivo deve ser arq02.txt.
O programa deve fechar o arquivo e reabri-lo para, a seguir, exibir todas as frases
já convertidas e gravadas. */

#include <stdio.h>  // biblioteca que faz a inclusãoo dos protótipos das funções de entrada/saída
#include <stdlib.h> // biblioteca de funções de uso geral
#include <string.h>	// biblioteca que contém protótipos utilizados para a manipulação de strings
#include <locale.h> // biblioteca que garante que caracteres como ç e acentuação sejam exibidos normalmente em nosso programa

// declaração de função para converter caracteres para maiúsculo
void maiusculo(char f1[], char f2[]);

int main()
{
    setlocale(LC_ALL, "portuguese"); // suporte ao idioma português no programa

    // declaração de variaveis
    char frase[50], fraseMaiuscula[50], fraseLeitura[50];
    char nome_arquivo[50] = "arq02.txt";
    int i;
  	char *linha;

    FILE *pont_arq; // declaração de variável ponteiro para o arquivo
	FILE *pont_arq_leitura; // declaração de variável ponteiro para a leitura do arquivo
	
    printf("Escreva 5 frases:\n\n"); 
    
    // abrir o arquivo
    pont_arq = fopen(nome_arquivo, "w");

    for (i = 1; i <= 5; i++){
  		
        if (pont_arq == NULL){ //teste se o arquivo foi realmente criado
            printf("Não foi possível abrir o arquivo!\n");
            
            return 0;
        } else {
            printf("Escreva a %i frase: ", i);
            
            fgets(frase, sizeof frase, stdin); // leitura da string digitada        
            maiusculo(frase, fraseMaiuscula); // chamada de função para converter os caracteres em maiúsculo
  			fprintf(pont_arq, "%s", fraseMaiuscula); //armazenar a string no arquivo

        }
    }
    
    fclose(pont_arq); // fechar arquivo
    
    printf("\nDados gravados com sucesso no arquivo!\n\n");
    	
    // Abre o arquivo para LEITURA
  	pont_arq_leitura = fopen(nome_arquivo, "rt");
  	
  	if (pont_arq_leitura == NULL){ //testar se o arquivo foi realmente criado	
     	printf("Não foi possível abrir o arquivo!\n");
     	return 0;
     	
  	} else { 		
  		i = 1;
  		
  		while (!feof(pont_arq_leitura)){
     		linha = fgets(fraseLeitura, sizeof fraseLeitura, pont_arq_leitura);  // leitura de cada linha do arquivo
      		if (linha)  // testar se é possível ler
	 		printf("Frase %d : %s",i,fraseLeitura);
      		i++;
		}
  	}
  	
  	fclose(pont_arq_leitura); // fechar arquivo de leitura

    return 0;
}

void maiusculo(char f1[], char f2[]){ // função para converter caracteres em maiúsculo
    int i = 0;
    
    while(f1[i] != '\0'){ // realiza a conversão de cada caractere para maiúsculo enquanto não encontra o fim da string
        f2[i] = toupper(f1[i]); // converte para maiúsculo e atribui valor ao vetor
        i++;
    }
    f2[i] = '\0'; // caracter que indica o fim da string
}