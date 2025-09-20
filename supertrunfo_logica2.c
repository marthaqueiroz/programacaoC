#include <stdio.h>

int main(){

    /* Carta 1 */
char cidade [100] = "Caruaru";
int pop = 405408, pontos = 15;
float area = 923.2, pib = 8.63000000; 



float densidade =  (float)pop / area; 
float pibpc = pib / pop;


printf("\n");


/* Carta 2*/
char cidade2[100]="Toritama";
int pop2 = 41137, pontos2 = 7;
float area2 = 25.704, pib2 = 764.60000000;


float densidade2 =  (float)pop2 / area2; 
float pibpc2 = pib2 / pop2;


/* Menu Interativo */

int comparacao;

printf("\nEscolha o atributo de comparação: ");
printf("\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &comparacao);

switch (comparacao)
{

    // Comparação de população
case 1:
    if (pop > pop2){
        printf("Cidades escolhidas: %s e %s. \n", cidade, cidade2);
        printf("O atributo de comparação utilizado foi População.\n");
        printf("Valores comparados - Carta 1: %d habitantes e Carta 2: %d habitantes.\n", pop, pop2);
        printf("A Carta 1 venceu!");
    } else if(pop2 > pop){
        printf("Cidades escolhidas: %s e %s.\n", cidade, cidade2);
        printf("O atributo de comparação utilizado foi População\n");
           printf("Valores comparados - Carta 1: %d habitantes e Carta 2: %d habitantes.\n", pop, pop2);
        printf("A Carta 2 venceu!");
    } else{

        printf("Empate!");
    }
    break;

     // Comparação da área

case 2:    
    if( area > area2){printf("Cidades escolhidas: %s e %s.\n", cidade, cidade2);
    printf("O atributo de comparação utilizado foi 'Área'.\n");
    printf("Valores comparados: %.2f km² e %.2f km².\n", area, area2);
    printf("A Carta 1 venceu!");
    } else if (area2 > area){
        printf("Cidades escolhidas: %s e %s.\n", cidade, cidade2);
        printf("O atributo de comparação utilizado foi 'Área'.\n");
        printf("Valores comparados: %.2f km² e %.2f km².\n", area, area2);
        printf("A Carta 2 venceu!");
    } else{
        printf("Empate!");
    }
    break;

     // Comparação do PIB

case 3:
  if(pib > pib2){
    printf("Cidades escolhidas: %s e %s.\n", cidade, cidade2);
    printf("O atributo de comparação utilizado foi 'PIB'.\n");
    printf("Valores comparados: R$ %.3f bilhões e R$ %.3f milhões.\n", pib, pib2);
    printf("A Carta 1 venceu!");
    } else if (pib < pib2){
         printf("Cidades escolhidas: %s e %s.\n", cidade, cidade2);
         printf("O atributo de comparação utilizado foi 'PIB'.\n");
         printf("Valores comparados: R$ %.3f bilhões e R$ %.3f milhões.\n", pib, pib2);
         printf("A Carta 2 venceu!");
    } else {
        printf("Empate!");
    }
    break;    

     // Comparação dos pontos turísticos
case 4:
    if(pontos > pontos2){
    printf("Cidades escolhidas: %s e %s.\n", cidade, cidade2);
    printf("O atributo de comparação utilizado foi 'Número de pontos turísticos'.\n");
    printf("Valores comparados: %d e %d.\n", pontos, pontos2);
    printf("A Carta 1 venceu!");
    } else if(pontos < pontos2){
         printf("Cidades escolhidas: %s e %s.\n", cidade, cidade2);
         printf("O atributo de comparação utilizado foi 'Número de pontos turísticos'.\n");
         printf("Valores comparados: %d e %d.\n", pontos, pontos2);
         printf("A Carta 2 venceu!");
    } else {
        printf("Empate!");
    }
    break;    

     // Comparação da densidade demográfica
case 5:
    if( densidade < densidade2){
    printf("Cidades escolhidas: %s e %s.\n", cidade, cidade2);
    printf("O atributo de comparação utilizado foi 'Densidade demográfica'.\n");
    printf("Valores comparados: %.3f h/km² e %.2f h/km².\n", densidade, densidade2);
    printf("A Carta 1 venceu!");
    } else if (densidade > densidade2){
         printf("Cidades escolhidas: %s e %s.\n", cidade, cidade2);
         printf("O atributo de comparação utilizado foi 'Densidade demográfica'.\n");
         printf("Valores comparados: %.3f h/km² e %.2f h/km².\n", densidade, densidade2);
         printf("A Carta 2 venceu!");
    } else {
        printf("Empate!");
    }
    break;    
default:   
    printf("Opção inválida!\n");
    break;
}

return 0;


}