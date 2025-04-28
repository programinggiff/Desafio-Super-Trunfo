#include <stdio.h>
// Desafio Super Trunfo Países.
// programador Vanessa.


int main() {

     printf("***Desafio  Países***\n");
     // Declaração das variáveis para primeira carta.
     char estado1;
     char codigo1[4];
     char cidade1[50];
     unsigned long int populacao1;
     float area1;
     float pib1; // PIB em bilhoes
     int pontosTuristicos1;
     float densidade1;
     float pib_per_capita1;

     // Declaração das variantes para segunda carta.
     char estado2;
     char codigo2[4];
     char cidade2[50];
     unsigned long int populacao2;
     float area2;
     float pib2; //PIB em bilhoes
     int pontosTuristicos2;
     float densidade2;
     float pib_per_capita2;
 
      // Cadastro da primeira carta.
     printf(" \nCadastro da primeira carta:\n");
     printf(" Digite o estado (A-H):");  //O estado é representado pelas letras de (A-H)
     scanf(" %c", &estado1);
   
     printf(" Digite o código da carta (ex:A01):"); //O código da carta é formado pela letra referente ao estado e o número da cidade que reprenta a cidade de (01-04)
     scanf(" %3s", codigo1);

     printf(" Digite o nome da cidade :"); // Escolha um número de (01-04)
     scanf("%s", cidade1);

     printf(" Digite a população da cidade:");
     scanf("%lu", &populacao1);
 
     printf(" Digite a área da cidade (em km²):");
     scanf("%f", &area1);
 
     printf(" Digite o PIB da cidade:");
     scanf("%f", &pib1); //PIB em bilhoes

     printf(" Digite o número de pontos turísticos:");
     scanf("%d", &pontosTuristicos1);


        // Cadastro da segunda carta.
     printf(" \nCadastro da segunda carta:\n");
     printf(" Digite o estado (A-H):"); //O estado é representado pelas letras de (A-H)
     scanf(" %c", &estado2);

     printf(" Digite o código da carta (ex:B01):"); //O código da carta é formado pela letra referente ao estado e o número da cidade que reprenta a cidade de (01-04)
     scanf(" %3s", codigo2);

     printf(" Digite o nome da cidade:");
     scanf("%s", cidade2);

     printf(" Digite a população da cidade2:");
     scanf("%lu", &populacao2);

     printf(" Digite a área da cidade2(em Km²):");
     scanf("%f", &area2);

     printf(" Digite o PIB da cidade2:");
     scanf("%f", &pib2);

     printf(" Digite os pontos Turísticos2:");
     scanf("%d", &pontosTuristicos2);

     //Cálculo dos novos atributos da primeira carta
     densidade1 = populacao1 / area1;
     pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;//Converte PIB para reais antes da divisao

     //Cálculo dos novos atributos da segunda carta
     densidade2 = populacao2 / area2;
     pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;//Converte Pib para reais antes da divisao
     

     //Exibição dos dados cadastrados da primeira carta 
     printf("\nCarta1:\n");
     printf("Estado : %c\n", estado1);
     printf("Código : %s\n", codigo1);
     printf("Cidade : %s\n", cidade1);
     printf("População : %lu\n", populacao1);
     printf("Área : %.2f km²\n", area1);
     printf("PIB : %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
     printf("PIB per Capita: %.2f Reais\n", pib_per_capita1);//PIB per capita em reais

        // Exibição dos dados cadastrados da segunda carta
     printf("\nCarta2:\n");
     printf("Estado : %c\n", estado2);
     printf("Código : %s\n", codigo2);
     printf("Cidade : %s\n", cidade2);
     printf("População : %lu\n", populacao2);
     printf("Área : %.2f km²\n", area2);
     printf("PIB : %.2f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
     printf("Densidade Populacional2: %.2f hab/km²\n", densidade2);
     printf("PIB per Capita: %.2f Reais\n", pib_per_capita2);//PIB per capita em reais

     // Super Poder: soma de todos os atributos relevantes + inverso da densidade
     float super_poder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pib_per_capita1 + (1.0 / densidade1);
     float super_poder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pib_per_capita2 + (1.0 / densidade2);


     // Comparação (1 se carta1 vence, 0 se carta2 vence)
     printf("\n**** Resultado das Camparações****\n");
     printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1: 2, (populacao1 > populacao2) ? 1 : 0);
     printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
     printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
     printf("pontos Turísticos: Carta %d venceu(%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2,  (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);  
     printf("Densidade Populacional (vence menor): Carta %d venceu (%d)\n", (densidade1 > densidade2 ) ? 1 : 2, (densidade1 > densidade2) ? 1 : 0);
     printf("PIB per Capita: Carta %d venceu(%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
     printf("Super Poder ((1) se Carta 1 vencer e (0) se Carta 2 vencer): Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2) ? 1 : 0);


     


   
      return 0; 
}
