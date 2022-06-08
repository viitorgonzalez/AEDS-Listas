#include <stdio.h>

/*Faça um programa que solicite ao usuário um número, em seguida, imprima na tela todos os
seus divisores. Salve em um arquivo texto a soma total desses divisores.*/

int main(void) {
  int num, c = 0, soma = 0; //var
  FILE *arquivo = fopen("entrada.txt", "w"); //abre o arquivo
  printf("Digite um número:\n");
  scanf("%d", &num); //inputdo numero a ser analisado
  for (int i = 1; i <= num; i++) { //passar por todos numeros interios ate chegar no numero
    if (num % i == 0) { //condição para ser divisor
      soma += i; //somados divisoress
      printf("'%d' é um divisor de %d\n", i, num); //resultado dos divisores
    }
  }
  fprintf(arquivo,"A soma dos divisores é: %d\n", soma); //resultado no arquivo da soma dos divisores
  fclose(arquivo); //fecha o arquivo
  return 0;
}