#include <stdio.h>
int main() {
  // Definição das variáveis para a carta 1
  char estado1, cidade1;
  int populacao1, pontos_turisticos1;
  float area1, pib1;

  // Definição das variáveis para a carta 2
  char estado2, cidade2;
  int populacao2, pontos_turisticos2;
  float area2, pib2;

  // Cadastro da carta 1
  printf("Cadastro da Carta 1:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Cidade (1-4): ");
  scanf(" %c", &cidade1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área (km²): ");
  scanf("%f", &area1);
  printf("PIB (em milhões): ");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos1);

  // Cadastro da carta 2
  printf("\nCadastro da Carta 2:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Cidade (1-4): ");
  scanf(" %c", &cidade2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área (km²): ");
  scanf("%f", &area2);
  printf("PIB (em milhões): ");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos: ");
  scanf("%d", &pontos_turisticos2);

  // Exibição dos dados da carta 1
  printf("\nDados da Carta 1:\n");
  printf("Código: %c%c1\n", estado1, cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f milhões\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);

  // Exibição dos dados da carta 2
  printf("\nDados da Carta 2:\n");
  printf("Código: %c%c1\n", estado2, cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f milhões\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos_turisticos2);

  return 0;
}
