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

unsigned int resultPop;
int resultArea, resultPontos;
float resultPib, resultPibpc, resultSuper, resultDensidade;

resultPop = pop > pop2;
resultArea = area > area2;
resultPontos = pontos > pontos2;
resultPib = pib > pib2;
resultPibpc = pibpc > pibpc2;
resultSuper = superpoder > superpoder2;
resultDensidade = densidade > densidade2;




/* Resultados Carta 1 */
printf("\n");
printf("Carta 1: \n");
printf("Estado: %c\n", estado);
printf("Codigo: %c%d\n", estado, codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %lu \n", pop);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2lf bilhoes de reais\n", pib);
printf("Número de pontos Turísticos: %d\n", pontos);
printf("Densidade Populacional: %.3f hab/km²\n", densidade);
printf("PIB per Capita: %.2f reais\n", pibpc);
printf("Super Poder: %.2f \n", superpoder);


/* Resultados Cartas 2 */

printf("\n");
printf("Carta 2: \n");
printf("Estado: %c\n", estado2);
printf("Codigo: %c%d\n", estado2, codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("População: %lu \n", pop2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2lf bilhoes de reais\n", pib2);
printf("Número de pontos Turísticos: %d\n", pontos2);
printf("Densidade Populacional: %.3f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibpc2);
printf("Super Poder: %.2f \n", superpoder2);






return 0;

}
