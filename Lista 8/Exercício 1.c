#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que escreva de 1 até 10 em um arquivo, armazenando um número por
linha.*/

int main(void) {
    FILE *pont_arq = fopen("entrada.txt", "w"); //abre o arquivo
    for (int i = 1; i <= 10; i++) {
        fprintf(pont_arq, "%d\n", i); //escreve no arquivo
    }
    fclose(pont_arq); //fecha arquivo

    return 0;
}