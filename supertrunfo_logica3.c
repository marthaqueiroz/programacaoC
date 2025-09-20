#include <stdio.h>

int main(){

    // Carta 1 
char cidade [100] = "Caruaru";
int pop = 405408, pontos = 15;
float area = 923.200, pib = 8.63000000; 

float densidade =  (float)pop / area; 
float pibpc = pib / pop;


    // Carta 2
char cidade2[100]="Toritama";
int pop2 = 41137, pontos2 = 7;
float area2 = 25.704, pib2 = 764.60000000;

float densidade2 =  (float)pop2 / area2; 
float pibpc2 = pib2 / pop2;

    // variaveis do jogo

 int primeiroAtributo, segundoAtributo; 
 const char *opcao, *opcao2, *vencedor;
 float valorCarta1_attr1, valorCarta2_attr1;
 float valorCarta1_attr2, valorCarta2_attr2;
 float somaCarta1, somaCarta2;
    

 // Menu Interativo 



    /* Primeiro Atributo */


printf("\nEscolha o primeiro atributo: ");
printf("\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf(" %d", &primeiroAtributo);

switch (primeiroAtributo)
{

    // Comparação de população
case 1:
  
    printf("Você escolheu a opção População!\n");
    opcao = "População";
    valorCarta1_attr1 = pop;
    valorCarta2_attr1 = pop2;
     
 
    break;

     // Comparação da área

case 2:    
   printf("Você escolheu a opção Área!\n");
   opcao = "Área";
   valorCarta1_attr1 = area;
   valorCarta2_attr1 = area2;
   break;

     // Comparação do PIB

case 3:
    printf("Você escolheu a opção PIB!\n");
    opcao = "PIB";
    valorCarta1_attr1 = pib;
    valorCarta2_attr1 = pib2;
    break;    

     // Comparação dos pontos turísticos
case 4:
    printf("Você escolheu a opção Pontos turísticos!\n");
    opcao = "Pontos turísticos";
    valorCarta1_attr1 = pontos;
    valorCarta2_attr1 = pontos2;
    break;    

     // Comparação da densidade demográfica
case 5:
    printf("Você escolheu a opção Densidade demográfica!\n");
    opcao = "Densidade demográfica";
    valorCarta1_attr1 = densidade;
    valorCarta2_attr1 = densidade2;
    break;    
default:   
    printf("Opção inválida!\n");
    break;
}

  
    printf("\n");


    /* Segundo Atributo */

    printf("\nEscolha o segundo atributo: ");
    printf("\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf(" %d", &segundoAtributo);


    if ( primeiroAtributo == segundoAtributo) {

        printf("Você já escolheu esse atributo");
    } else {
        switch (segundoAtributo)
        {
        // Comparação de população
case 1:
  
    printf("Você escolheu a opção População!\n");
    opcao2 = "População";
    valorCarta1_attr2 = pop;
    valorCarta2_attr2 = pop2;
     
 
    break;
 
                        /* DENSIDADE DEMOGRÁFICA */

        float attr1Carta1 = (primeiroAtributo == 5) ? -valorCarta1_attr1 : valorCarta1_attr1;
        float attr1Carta2 = (primeiroAtributo == 5) ? -valorCarta2_attr1 : valorCarta2_attr1;
        float attr2Carta1 = (segundoAtributo == 5) ? -valorCarta1_attr2 : valorCarta1_attr2;
        float attr2Carta2 = (segundoAtributo == 5) ? -valorCarta2_attr2 : valorCarta2_attr2;

        somaCarta1 = attr1Carta1 + attr2Carta1;
        somaCarta2 = attr1Carta2 + attr2Carta2;



     // Comparação da área

case 2:    
   printf("Você escolheu a opção Área!\n");
   opcao2 = "Área";
   valorCarta1_attr2 = area;
   valorCarta2_attr2 = area2;
   break;

     // Comparação do PIB

case 3:
    printf("Você escolheu a opção PIB!\n");
    opcao2 = "PIB";
    valorCarta1_attr2 = pib;
    valorCarta2_attr2 = pib2;
    break;    

     // Comparação dos pontos turísticos
case 4:
    printf("Você escolheu a opção Pontos turísticos!\n");
    opcao2 = "Pontos turísticos";
    valorCarta1_attr2 = pontos;
    valorCarta2_attr2 = pontos2;
    break;    

     // Comparação da densidade demográfica
case 5:
    printf("Você escolheu a opção Densidade demográfica!\n");
    opcao2 = "Densidade demográfica";
    valorCarta1_attr2 = densidade;
    valorCarta2_attr2 = densidade2;
    break;    
default:   
    printf("Opção inválida!\n");
    break;
}

 printf("\n");

somaCarta1 = valorCarta1_attr1 + valorCarta1_attr2;
somaCarta2 = valorCarta2_attr1 + valorCarta2_attr2;

    /* Carta ganhadora */

    vencedor = (somaCarta1 > somaCarta2) ? "Carta 1" : (somaCarta2 > somaCarta1) ? "Carta 2" : "Empate!";
 
    
   
printf("Cidades escolhidas: %s e %s\n", cidade, cidade2);
printf("\n");
printf("Atributos escolhidos: \nCarta 1 - %s\nCarta 2 - %s\n", opcao, opcao2);
printf("\n");
printf("Valores do primeiro atributos: \nCarta 1 - %f\nCarta 2 - %f \n", valorCarta1_attr1, valorCarta2_attr1);
printf("\n");
printf("Valores do segundo atributos: \nCarta 1 - %f \nCarta 2 - %f \n",  valorCarta1_attr2, valorCarta2_attr2);
printf("\n");
printf("Soma dos atributos: \nCarta 1 - %f\nCarta 2 - %f\n", somaCarta1, somaCarta2);
printf("\n");
printf("Vencedor: %s\n", vencedor);
}

return 0;


}