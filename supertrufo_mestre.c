#include <stdio.h>

int main(){

    /* Carta 1 */
char estado, cidade[100];
unsigned long int pop;
int codigo, pontos;
float area; 
double pib;


printf("Carta 1:");
printf("Escolha o estado entre A a H: ");
scanf("%c", &estado);
printf("Escolha o cógido: ");
scanf("%d", &codigo);
printf("Digite o nome da Cidade: ");
scanf("%s", cidade);
printf("Digite a popualação: ");
scanf("%lu", &pop);
printf("Digite a área: ");
scanf("%f", &area);
printf("Digite o PIB: ");
scanf("%lf", &pib);
printf("Números de pontos turísticos: ");
scanf("%d", &pontos);


float densidade =  (float)pop / area; 
float pibpc = pib / pop;

float superpoder = (float)pop + area + (float) pib + (float)pontos + pibpc + (1 / densidade);


printf("\n");


/* Carta 2*/
char estado2, cidade2[100];
unsigned long int pop2;
int codigo2, pontos2;
float area2;
double pib2;


printf("Carta 2:\n");
printf("Escolha o estado entre A a H: ");
scanf(" %c", &estado2);
printf("Escolha o cógido: ");
scanf("%d", &codigo2);
printf("Digite o nome da Cidade: ");
scanf("%s", cidade2);
printf("Digite a popualação: ");
scanf("%lu", &pop2);
printf("Digite a área: ");
scanf("%f", &area2);
printf("Digite o PIB: ");
scanf("%lf", &pib2);
printf("Números de pontos turísticos: ");
scanf("%d", &pontos2);


float densidade2 =  (float)pop2 / area2; 
float pibpc2 = pib2 / pop2;

float superpoder2 = (float)pop2 + area2 + (float)pib2 + (float)pontos2 + pibpc2 + (1 / densidade2);


/* Comparações de Cartas*/

int resultArea, resultPontos, resultPop, resultPib;
int resultPibpc, resultSuper, resultDensidade;

resultPop = pop > pop2;
resultArea = area > area2;
resultPontos = pontos > pontos2;
resultPib = pib > pib2;
resultPibpc = pibpc > pibpc2;
resultSuper = superpoder > superpoder2;
resultDensidade = densidade < densidade2;




/* Resultados */
printf("\n");
printf("Comparação de Cartas:\n");
printf("População: Carta %d venceu (%d)\n", resultPop ? 1 : 2, resultPop);
printf("Área: Carta %d venceu (%d)\n", resultArea ? 1 : 2, resultArea);
printf("PIB: Carta %d venceu (%d)\n", resultPib ? 1 : 2, resultPib);
printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultPontos ? 1 : 2, resultPontos);
printf("Densidade Populacional: Carta %d venceu (%d)\n", resultDensidade ? 1 : 2, resultDensidade);
printf("PIB per Capita: Carta %d venceu (%d)\n", resultPibpc ? 1 : 2, resultPibpc);
printf("Super Poder: Carta %d venceu (%d)\n", resultSuper ? 1 : 2, resultSuper);



return 0;


}
