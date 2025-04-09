#include <stdio.h>
// Desafio Super Trunfo Países.
// programador Vanessa.


int main() {

     printf("***Desafio  Países***\n");
     // Declaração das variáveis para primeira carta.
     char estado1[4];
     char codigo1[4];
     char cidade1[50];
     int populacao1;
     float area1;
     float pib1;
     int pontosTuristicos1;

     // Declaração das variantes para segunda carta.
     char estado2[4];
     char codigo2[4];
     char cidade2[50];
     int populacao2;
     float area2;
     float pib2;
     int pontosTuristicos2;
 
      // Cadastro da primeira carta.
     printf(" \nCadastro da primeira carta:\n");
     printf(" Digite o estado (A-H):");  //O estado é representado pelas letras de (A-H)
     scanf("%s", &estado1);

     printf(" Digite o código da carta (ex:A01):"); //O código da carta é formado pela letra referente ao estado e o número da cidade que reprenta a cidade de (01-04)
     scanf(" %s", codigo1);

     printf(" Digite o nome da cidade :");
     scanf("%s", cidade1);

     printf(" Digite a população da cidade:");
     scanf("%d", &populacao1);
 
     printf(" Digite a área da cidade (em km²):");
     scanf("%f", &area1);
 
     printf(" Digite o PIB da cidade (em bilhões de reais):");
     scanf("%f", &pib1);

     printf(" Digite o número de pontos turísticos:");
     scanf("%d", &pontosTuristicos1);

        // Cadastro da segunda carta.
     printf(" \nCadastro da segunda carta:\n");
     printf(" Digite o estado (A-H):"); //O estado é representado pelas letras de (A-H)
     scanf(" %s", &estado2);

     printf("Digite o código da carta:"); //O código da carta é formado pela letra referente ao estado e o número da cidade que reprenta a cidade de (01-04)
     scanf(" %s", codigo2);

     printf(" Digite o nome da cidade:");
     scanf("%s", cidade2);

     printf(" Digite a população da cidade2:");
     scanf("%d", &populacao2);

     printf(" Digite a área da cidade2(em Km²):");
     scanf("%f", &area2);

     printf(" Digite o PIB da cidade2:");
     scanf("%f", &pib2);

     printf(" Digite os pontos Turísticos2:");
     scanf("%d", &pontosTuristicos2);

     //Exibição dos dados cadastrados da primeira carta 
     printf("\nCarta1:\n");
     printf("Estado : %s\n", estado1);
     printf("Código : %s\n", codigo1);
     printf("Cidade : %s\n", cidade1);
     printf("População : %d\n", populacao1);
     printf("Área : %.2f km²\n", area1);
     printf("PIB : %.3f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

        // Exibição dos dados cadastrados da segunda carta
     printf("\nCarta2:\n");
     printf("Estado : %s\n", estado2);
     printf("Código : %s\n", codigo2);
     printf("Cidade : %s\n", cidade2);
     printf("População : %d\n", populacao2);
     printf("Área : %.2f km²\n", area2);
     printf("PIB : %.3f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);





    


 
 













    return 0; 
}
