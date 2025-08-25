#include <stdio.h>

int main (){

    char estado, carta[3], cidade[50];
    int pop, pontos;
    float km, pib;
    
    /* Estado */
    printf("Escolha uma letra de 'A' a 'H' para representar o Estado: \n");
    scanf("%c", &estado);

    /* Código da Carta*/

    printf("Digite um Código da Carta entre 01 a 04: \n");
    scanf("%s", carta);
   
    /* Nome da Cidade*/

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    /* População */

    printf("Digite a quantidade da população: \n");
    scanf("%d", &pop);

    /* KM² */

    printf("Digite o KM² da cidade: \n");
    scanf("%f", &km);

    /* PIB */

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    /* Números de Pontos Turísticos */

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &pontos);

    /* Resultado */

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", pop);
    printf("Área: %.2f km²\n", km);
    printf(" PIB: %.2f bilhões de reais\n", pib);
    printf("Números de Pontos Turísticos: %d", pontos);

    return 0;
}


