#include <stdio.h>
#include <stdlib.h>

/*Implemente um programa que abra o arquivo texto (criado no exercício anterior) e conte a
quantidade de caracteres ‘a’ que estão presentes nele. Imprima a quantidade na tela.*/

int main(void)
{
    FILE *arquivo; //arquivo
    char letra;
    int c = 0;
    arquivo = fopen("entrada.txt","r"); //abre o arquivo
    while ((letra = fgetc(arquivo))!= EOF) { //enquanto não acabar o arquivo, repita
        if (letra == 'a') {
        c++; //condição para incrementar a quantidade de letras 'a'
        } 
    }   
    if (c > 0) { //condição para escrever os resultados
        printf("Existe ou existem %d letras 'a'\n", c);
    } else {
            printf("\nNão existe letra 'a'!");
    }   
    fclose(arquivo); //fecha o arquivo
    return 0;
}