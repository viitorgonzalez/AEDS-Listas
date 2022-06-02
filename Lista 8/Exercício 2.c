#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que receba um texto do usuário e grave o texto em um arquivo.*/

int main(void)
{
    FILE *pont_arq = fopen("entrada.txt", "w");
    char n[50];
    scanf("%s", n);
    fprintf(pont_arq, "%s\n", n);
    fclose(pont_arq);
    return 0;
}