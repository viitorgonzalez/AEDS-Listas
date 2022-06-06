#include <stdio.h>

/*Implemente um programa que leia um arquivo texto e imprima, linha a linha, o seu conteúdo
na tela. Imprima também a quantidade de linhas que este arquivo possui.*/

int main (void) {
    FILE *arquivo = fopen("entrada.txt", "r"); //abre o arquivo
    char letra;
    int c = 0;
    while ((letra = fgetc(arquivo))!= EOF) {
        printf("%c",letra); //escreve o texto do arquivo

        if (letra == '\n')  {
            c++; //conta as linhas
        }
    }
    printf("\nA quantidade de linhas é %d\n", c); //resultado das linhas
    fclose(arquivo); //fecha o arquivo
    return 0;
}