#include <stdio.h>

int main() {
  //carta_1
  char estado, codigoCarta[30], nomeCidade[30];
  int populacao, numPontosTuristicos;
  float areaCidade, pib, densidade, pibPercapita, superPoder; 

  printf("Carta 1: \n");
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

  densidade = (float)populacao / areaCidade;
  pibPercapita = (float)pib / populacao;
   
  printf("Estado: %c\n", estado);
  printf("Código da Carta: %s\n", codigoCarta);
  printf("Nome da Cidade: %s\n", nomeCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f\n", areaCidade);
  printf("PIB: %.2f\n", pib);
  printf("Número de pontos turísticos: %d\n", numPontosTuristicos );
  printf("Densidade Populacional: %.2f\n", densidade);
  printf("PIB per Capita: %.2f\n", pibPercapita);

  /*
  1.superpoder converte explicitamente int para float antes da soma
  2. 1.f / densidade garante que o inverso da densidade seja tratado como float
  */
 superPoder = (float)populacao + areaCidade + pib + (float)numPontosTuristicos + pibPercapita + (1.0f / densidade);
 printf("Super Poder: %.2f\n", superPoder);
  
  //Carta_2
  char estado2, codigoCarta2[30], nomeCidade2[30];
  int populacao2, numPontosTuristicos2;
  float areaCidade2, pib2, densidade2, pibPercapita2, superPoder2; 

  printf("Carta 2: \n");
  printf("Insira uma letra de 'A' a 'H': \n");
  scanf(" %c", &estado2);
  
  printf("Código da carta: ");
  scanf(" %s", codigoCarta2);
  
  printf("Nome da cidade: ");
  scanf(" %s", nomeCidade2);

  printf("População: ");
  scanf(" %d", &populacao2);

  printf("Área (em km²): ");
  scanf(" %f", &areaCidade2);

  printf("PIB: ");
  scanf(" %f", &pib2);
  
  printf("Número de pontos turísticos: ");
  scanf(" %d", &numPontosTuristicos2);
  
  densidade = (float)populacao2 / areaCidade2;
  pibPercapita2 = (float)pib2 / populacao2;
 
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", areaCidade2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de pontos turísticos: %d\n", numPontosTuristicos2);
  printf("Densidade Populacional: %f\n", densidade2);
  printf("PIB per Capita: %.2f\n", pibPercapita2);

  superPoder2 = (float)populacao2 + areaCidade2 + pib2 + (float)numPontosTuristicos2 + pibPercapita2 + (1.0f / densidade2);
  printf("Super Poder: %.2f\n", superPoder2);
    
  //unsigned int garante que o valor nunca seja negativo
  unsigned int resultPopulacao = (unsigned int)(populacao > populacao2);
  unsigned int resultArea = (unsigned int)(areaCidade > areaCidade2);
  unsigned int resultPib = (unsigned int)(pib > pib2);
  unsigned int resultPontosTur = (unsigned int)(numPontosTuristicos > numPontosTuristicos2);
  unsigned int resultDensidade = (unsigned int)(densidade < densidade2);
  unsigned int resultPibPercapta = (unsigned int)(pibPercapita > pibPercapita2);
  unsigned int resultSuperPoder = (unsigned int) (superPoder > superPoder2);

  /*
  Compara se a população 1 é maior que a população 2
  Se a expressão população > população2 vale 1, então 1 * 1 + 2 * 0 = 1 a carta 1 vence.
  se a epressão população <= população2 vale 0, então 1 * 0 + 2 * 1 = 2 a carta 2 vence
  */ 
  int vencedoraPopulacao = 1 * (populacao > populacao2) + 2 * (populacao <= populacao2);
  int vencedoraArea = 1 * (areaCidade > areaCidade2) + 2 * (areaCidade <= areaCidade2);
  int vencedoraPib = 1 * (pib > pib2) + 2 * (pib <= pib2);
  int vencedoraPontosTuristicos = 1 * (numPontosTuristicos > numPontosTuristicos2) + 2 * (numPontosTuristicos <= numPontosTuristicos2);
  int vencedoraDensidade = 1 * (densidade < densidade2) + 2 * (densidade >= densidade2);
  int vencedoraPibPerCapita = 1 * (pibPercapita > pibPercapita2) + 2 * (pibPercapita <= pibPercapita2);
  int vencedoraSuperPoder = 1 * (superPoder > superPoder2) + 2 * (superPoder <= superPoder2);

  printf("Comparação de Cartas: \n");
  printf("População: Carta %d venceu \n", vencedoraPopulacao);
  printf("Área: Carta %d venceu \n", vencedoraArea);
  printf("PIB: Carta %d venceu \n", vencedoraPib);
  printf("Pontos Turísticos: Carta %d venceu \n", vencedoraPontosTuristicos);
  printf("Densidade Populacional: Carta %d venceu \n", vencedoraDensidade );
  printf("PIB per Capita: Carta %d venceu \n", vencedoraPibPerCapita);
  printf("Super Poder: Carta %d venceu \n", vencedoraSuperPoder);

  return 0;
}
