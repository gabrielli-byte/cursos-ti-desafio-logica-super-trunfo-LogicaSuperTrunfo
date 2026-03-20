#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
int opcao;

// CARTA 1
char estado1;
char codigo1[5];
char nomeCidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontosTuristicos1;
float densidade1;
float pibPerCapita1;
float superPoder1;

// CARTA 2
char estado2;
char codigo2[5];
char nomeCidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
float densidade2;
float pibPerCapita2;
float superPoder2;

// MENU

printf("Menu principal\n");
printf("1. Começar o jogo.\n");
printf("2. Ver as regras.\n");
printf("3. Sair do jogo.\n");
printf("Escolha uma opção.\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    // DADOS DA CARTA 1 
printf(" CARTA 1 \n");

printf("Estado (A a H): ");
scanf(" %c", &estado1);

printf("Codigo da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Nome da cidade: ");
scanf(" %[^\n]", nomeCidade1);

printf("Populacao: ");
scanf("%lu", &populacao1);

printf("Area (km²): ");
scanf("%f", &area1);

printf("PIB (em bilhoes): ");
scanf("%f", &pib1);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos1);


// DADOS DA CARTA 2 
printf("\n CARTA 2 \n");

printf("Estado (A a H): ");
scanf(" %c", &estado2);

printf("Codigo da carta (ex: A01): ");
scanf("%s", codigo2);

printf("Nome da cidade: ");
scanf(" %[^\n]", nomeCidade2);

printf("Populacao: ");
scanf("%lu", &populacao2);

printf("Area (km²): ");
scanf("%f", &area2);

printf("PIB (em bilhoes): ");
scanf("%f", &pib2);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos2);


// CALCULOS 
densidade1 = populacao1 / area1;
pibPerCapita1 = (pib1 * 100000000) / populacao1;

densidade2 = populacao2 / area2;
pibPerCapita2 = (pib2 * 100000000) / populacao2;



// SUPER PODER

superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

// SAIDA CARTA 1 
printf("\n CARTA 1 \n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", nomeCidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes\n", pib1);
printf("Pontos Turisticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


// SAIDA CARTA 2 
printf("\n CARTA 2 \n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", nomeCidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes\n", pib2);
printf("Pontos Turisticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

// COMPARAÇÃO

printf("\n Comparaçao:\n");

if (populacao1 > populacao2) {
    printf("População: Carta 1 venceu!\n");
  } else if (populacao2 > populacao1)
  {
    printf("População: Carta 2 venceu!\n");
  }else
  {
    printf("População: Empate !\n");
  }

  
if (area1 > area2) 
{
  printf("Area: Carta 1 venceu!\n");
} else if (area2 > area1){
    printf("Area: Carta 2 venceu!\n");
} else
{
    printf("Area: Empate !\n");
}


if (pib1 > pib2) {
  printf("PIB: Carta 1 venceu!\n");
} else if (pib2 > pib1)
{
     printf("PIB: Carta 2 venceu!\n");
}else
{
     printf("PIB: Empate !\n");
}


if (pontosTuristicos1 > pontosTuristicos2) {
  printf("Pontos Turisticos: Carta 1 venceu!\n");
} else if (pontosTuristicos2 > pontosTuristicos1)
{
     printf("Pontos Turisticos: Carta 2 venceu!\n");
} else
{
    printf("Pontos Turisticos: Empate !\n");
}


if (densidade1 < densidade2) {
  printf("Densidade: Carta 1 venceu!\n");
} else if (densidade2 < densidade1)
{
    printf("Densidade: Carta 2 venceu!\n");
} else
{
    printf("Densidade: Empate !\n");
}


if (pibPerCapita1 > pibPerCapita2) {
  printf("PIB per Capita: Carta 1 venceu!\n");
} else if (pibPerCapita2 > pibPerCapita1)
{
     printf("PIB per Capita: Carta 2 venceu!\n");
} else
{
    printf("PIB per Capita: Empate !\n");
}


if (superPoder1 > superPoder2) {
  printf("Super Poder: Carta 1 venceu!\n");
} else if (superPoder2 > superPoder1)
{
    printf("Super Poder: Carta 2 venceu!\n");
} else
{
    printf("Super Poder: Empate !\n");
}

    break;
case 2:
    printf("\n--- REGRAS ---\n");
    printf("O jogador cadastra duas cartas.\n");
    printf("Depois, os atributos serao comparados.\n");
    printf("A carta com melhores valores vence!\n");
    break;
case 3:
    printf("Saindo do jogo.....\n");
    break;
default:
    printf("Opção invalida. Tente novamente.\n");
    break;
}

return 0;
}