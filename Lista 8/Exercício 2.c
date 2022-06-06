#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que receba um texto do usuário e grave o texto em um arquivo.*/

int main(void)
{
    FILE *pont_arq = fopen("entrada.txt", "w"); //abre o arquivo
    printf("Digite seu texto até 50 linhas:\n");
    char n[50];
    fgets(n, 50, stdin); //input do texto a ser escrito no arquivo
    fprintf(pont_arq, "%s\n", n); //escreve 'n' no arquivo 
    fclose(pont_arq); //fecha o arquivo
    return 0;
}