#include <stdio.h>
#include <stdbool.h>

/*Escreva um programa que concatene o conteúdo de dois arquivos. O conteúdo dos dois
arquivos deverá ser adicionado em um terceiro arquivo.
*/

int main(void) {
    FILE *arquivoUm, *arquivoDois, *arquivoContatenado; //arquivos
    char textoUm[50], textoDois[50]; //textos usados para copiar um arquivo para outro
    arquivoUm = fopen("entrada.txt", "r");
    arquivoDois = fopen("entradaDois.txt", "r");
    arquivoContatenado = fopen("entradacontatenada.txt", "r+");
    bool arqUmEnd = false, arqDoisEnd = false;
    while (!arqUmEnd || !arqDoisEnd) { //condição para copiar os textos
        if (fgets(textoUm, 50, arquivoUm) != NULL) {
            fputs(textoUm, arquivoContatenado);
        } else {
            arqUmEnd = true;
        }
        if (fgets(textoDois, 50, arquivoDois) != NULL) {
            fputs(textoDois, arquivoContatenado);
        } else {
            arqDoisEnd = true;
        }
    }

    fclose(arquivoUm);
    fclose(arquivoDois);
    fclose(arquivoContatenado); //fecha os arquivos

    return 0;
}