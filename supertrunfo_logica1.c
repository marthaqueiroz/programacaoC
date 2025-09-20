#include <stdio.h>

int main(){

    /* Carta 1 */
char estado, cidade[100], codigo [10];
int pop, pontos;
float area, pib; 



printf("Carta 1:");
printf("Escolha o estado entre A a H: ");
scanf("%c", &estado);
printf("Escolha um cógido entre 1 e 2: ");
scanf(" %s", &codigo);
printf("Digite o nome da Cidade: ");
scanf("%s", cidade);
printf("Digite a popualação: ");
scanf("%d", &pop);
printf("Digite a área: ");
scanf("%f", &area);
printf("Digite o PIB: ");
scanf("%f", &pib);
printf("Números de pontos turísticos: ");
scanf("%d", &pontos);


float densidade =  (float)pop / area; 
float pibpc = pib / pop;


printf("\n");


/* Carta 2*/
char estado2, cidade2[100], codigo2 [10];
int pop2, pontos2;
float area2, pib2;

printf("Carta 2:\n");
printf("Escolha o estado entre A a H: ");
scanf(" %c", &estado2);
printf("Escolha um cógido entre 1 e 2: ");
scanf(" %s", &codigo2);
printf("Digite o nome da Cidade: ");
scanf("%s", cidade2);
printf("Digite a popualação: ");
scanf("%d", &pop2);
printf("Digite a área: ");
scanf("%f", &area2);
printf("Digite o PIB: ");
scanf("%f", &pib2);
printf("Números de pontos turísticos: ");
scanf("%d", &pontos2);


float densidade2 =  (float)pop2 / area2; 
float pibpc2 = pib2 / pop2;


/* Resultados */
printf("\n");
printf("Carta 1: \n");
printf("Densidade Populacional: %f \n", densidade);
printf("PIB per Capita: %f \n", pibpc);

printf("Carta 2: \n");
printf("Densidade Populacional: %f \n", densidade2);
printf("PIB per Capita: %f \n", pibpc2);
printf("\n");

/* Comparação */


if(pop > pop2){
    printf("A tributo de comparação: População \n");
    printf("Carta 1 - %s: %d\n", cidade, pop);
    printf("Carta 2 - %s: %d\n", cidade2, pop2);
    printf("Resultado: Carta 1  (%s) venceu!\n", cidade);
   
} else {
    printf("A tributo de comparação: População \n");
    printf("Carta 1 - %s: %d\n", cidade, pop);
    printf("Carta 2 - %s: %d\n", cidade2, pop2);
    printf("Resultado: Carta 2  (%s) venceu!\n", cidade2);
}

return 0;


}