#include <stdio.h>

/*Crie um programa que leia a quantidade de veículos que uma locadora de veículos possui e
o valor que ela cobra por cada aluguel, mostrando as informações pedidas a seguir:
 Sabendo-se que um terço dos veículos são alugados por mês, exiba o faturamento anual
da locadora
 Quando o cliente atrasa a entrega, é cobrada uma multa de 20% sobre o valor do aluguel.
Sabendo que um décimo dos veículos alugados no mês é devolvido com atraso, calcule
o valor ganho com multas no mês
 Sabe-se ainda que 2% dos veículos precisam de manutenção ao longo do ano. Calcule o
valor gasto com a manutenção anual, sabendo que o valor gasto em média com a
manutenção é de R$ 600,00.
Além de mostrar os resultados na tela, grave em um arquivo chamado resultado.txt. Cada
valor deverá ser armazenado em uma linha.
*/

int main(void) {
    int quantidadeVeiculos = 0;
    float valMult = 0, valorAluguel = 0, quantidadeAlugadosMes = 0, valorManutencao = 0, fatAnual = 0;

    //input da quantidade de veiculos e valor do aluguel
    printf("Digite a quantidade de veículos e o valor do aluguel\n");
    scanf("%d %f", &quantidadeVeiculos, &valorAluguel);

    //calculando valor de manutenção, qauntidade de alugados por mes, valor total de multas e faturamento anual
    valorManutencao = (quantidadeVeiculos * 0.02) * 600;
    quantidadeAlugadosMes = (quantidadeVeiculos / 3) * valorAluguel;
    valMult = ((quantidadeVeiculos / 3) / 10) * (valorAluguel * 0.2);
    fatAnual = (valMult + quantidadeAlugadosMes) * 12;

    //mostrando na tela os resultados
    printf("A faturação Anual é: %.2f\n", fatAnual);
    printf("Se atrasar a entrega será cobrado: %.2f\n", valorAluguel * 0.2);
    printf("O valor ganho com multas é: %.2f\n", valMult * 12);
    printf("O valor gasto com manutenção é: %.2f\n", valorManutencao);

    //Escrevendo os valores obtidos no arquivo
    FILE *arquivo = fopen("resultado.txt", "wb");
    fprintf(arquivo, "A faturação Anual é: %.2f\n", fatAnual);
    fprintf(arquivo, "Se atrasar a entrega será cobrado: %.2f\n", valorAluguel * 0.2);
    fprintf(arquivo, "O valor ganho com multas é: %.2f\n", valMult * 12);
    fprintf(arquivo, "O valor gasto com manutenção é: %.2f\n", valorManutencao);
    fclose(arquivo);
    //fechei o arquivo
    
    //FIM
    return 0;
}