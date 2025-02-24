#include <stdio.h>

int main() {
  //carta_1
  char estado, codigoCarta[30], nomeCidade[30];
  int populacao, numPontosTuristicos;
  float areaCidade, pib, densidade, pibPercapita; 

  printf("Carta 1: \n");
  printf("Insira uma letra de 'A' a 'H': ");
  scanf(" %c", &estado);
  
  printf("Código da carta: ");
  scanf(" %s", codigoCarta);
  
  printf("Nome da cidade: ");
  scanf(" %s", nomeCidade);

  printf("População: ");
  scanf(" %d", &populacao);

  printf("Área (em km²): ");
  scanf(" %f", &areaCidade);

  printf("PIB: ");
  scanf(" %f", &pib);
  
  printf("Número de pontos turísticos: ");
  scanf(" %d", &numPontosTuristicos);

  densidade = populacao / areaCidade;
  pibPercapita = pib / populacao;
   
  printf("Estado: %c\n", estado);
  printf("Código da Carta: %s\n", codigoCarta);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", areaCidade);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %d\n", numPontosTuristicos );
  printf("Densidade Populacional: %f\n", densidade);
  printf("PIB per Capita: %f\n", pibPercapita);

  //Carta_2
  printf("Carta 2: \n");
  printf("Insira uma letra de 'A' a 'H': \n");
  scanf(" %c", &estado);
  
  printf("Código da carta: ");
  scanf(" %s", codigoCarta);
  
  printf("Nome da cidade: ");
  scanf(" %s", nomeCidade);

  printf("População: ");
  scanf(" %d", &populacao);

  printf("Área (em km²): ");
  scanf(" %f", &areaCidade);

  printf("PIB: ");
  scanf(" %f", &pib);
  
  printf("Número de pontos turísticos: ");
  scanf(" %d", &numPontosTuristicos);
  
  densidade = populacao / areaCidade;
  pibPercapita = pib / populacao;

  printf("Estado: %c\n", estado);
  printf("Código da Carta: %s\n", codigoCarta);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", areaCidade);
  printf("PIB: %f\n", pib);
  printf("Número de pontos turísticos: %d", numPontosTuristicos);
  printf("Densidade Populacional: %f\n", densidade);
  printf("PIB per Capita: %f\n", pibPercapita);
  
  return 0;

}
