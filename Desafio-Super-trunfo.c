#include <stdio.h>
// Desafio Super Trunfo Países.
// programador Vanessa.


int main() {

     printf("Desafio  Países\n");
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
     printf(" Digite o estado (A-H):"); //O estado é representado pelas letras de (A-H)
     scanf("%s", &estado1);

     printf(" Digite o código da carta (ex:A01): "); //O código da carta é formado pela letra referente ao estado e o número da cidade que reprenta a cidade de (01-04)
     scanf("%s", codigo1);

     printf(" Digite o nome da cidade :");
     scanf("%s", cidade1);

     printf(" Digite a população da cidade: ");
     scanf("%d", &populacao1);
 
     printf(" Digite a área da cidade (em km²): ");
     scanf("%f", &area1);
 
     printf(" Digite o PIB da cidade (em bilhões de reais): ");
     scanf("%f", &pib1);
 













    return 0; 
}
