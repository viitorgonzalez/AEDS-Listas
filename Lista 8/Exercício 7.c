#include <stdio.h>

/*Faça um programa para inserir N letras informadas pelo usuário em um arquivo texto. Onde
N é uma quantidade de letras definida pelo usuário. Depois de inseridas as N letras, o
programa deverá ler todas as N letras do arquivo, calcular e mostrar a quantidade de vogais,
ou seja, quantas letras a, e, i, o, u*/

int main(void) {
    FILE *arquivo = fopen("entrada.txt", "w");
    int n = 0;

    //input das letras e escrevendo elas na tela e gravando no arquivo
    printf("Digite a quantidade de letras ou caracteres a serem digitadas: (Espaço é caractere)\n"); 
    scanf("%d", &n);
    char letras[n + 1], letra;
    printf("Digite as letras:\n");
    getchar();
    fgets(letras, n + 1, stdin);
    fprintf(arquivo, "%s\n", letras);

    //fechar arquivo
    fclose(arquivo);

    //abrindo arquivo para leitura e calculo de vogais
    FILE *arquivoLer = fopen("entrada.txt", "r");
    int c = 0;
     while (!feof(arquivoLer)) {
         letra = fgetc(arquivoLer);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            c++;
            printf("Vogal encontrada: %c, totalizando %d vogais\n", letra, c);
        }
    }

    //fechar aqruivos
    fclose(arquivoLer);

    return 0;
}