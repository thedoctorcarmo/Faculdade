#include <stdio.h>

int main(){

  printf("Sistema de cartas do supertrunfo  \n");
  printf("Insira os dados da primeira carta \n");
  
  //variáveis referentes as cartas com os finais _1 e _2 respectivamente para cada carta
  
  char estado_1[2],estado_2[2];
  char cod_carta_1[3],cod_carta_2[3];
  char nome_cidade_1[30], nome_cidade_2[30];
  int populacao_1,populacao_2;
  float area_cid_1,area_cid_2;
  float pib_cid_1,pib_cid_2;
  int n_pontos_turisticos_1,n_pontos_turisticos_2;

  //cadastro da primeira cidade

  printf("Digite o Estado - Deve ser uma letra de A até H \n");
  scanf("%s", &estado_1);
  
  printf("Digite o código da carta - um número de 01 à 04 \n");
  scanf("%s", &cod_carta_1);
  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome_cidade_1);
  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao_1);
  printf("digite a área da cidade: \n");
  scanf("%f", &area_cid_1);
  printf("digite o pib da cidade: \n");
  scanf("%f", &pib_cid_1);
  printf("digite a quantidade de pontos turísticos: \n");
  scanf("%d", &n_pontos_turisticos_1);

  printf("primeira cidade cadastrada com sucesso! \n");
  printf("Cadastre a segunda cidade: \n");
  
  //cadastro segunda cidade

  printf("Digite o Estado - Deve ser uma letra de A até H \n");
  scanf("%s", &estado_2);
  printf("Digite o código da carta -  um número de 01 à 04 \n");
  scanf("%s", &cod_carta_2);
  printf("Digite o nome da cidade: \n");
  scanf("%s", &nome_cidade_2);
  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao_2);
  printf("digite a área da cidade: \n");
  scanf("%f", &area_cid_2);
  printf("digite o pib da cidade: \n");
  scanf("%f", &pib_cid_2);
  printf("digite a quantidade de pontos turísticos: \n");
  scanf("%d", &n_pontos_turisticos_2);

  printf("segunda cidade cadastrada com sucesso! \n \n");
  
  //exibindo cartas cadastradas:

  printf("cartas cadastradas: \n \n");

  printf("Carta 1 \n");
  printf("Estado: %s \n", estado_1);
  printf("Código: %s%s\n", estado_1,cod_carta_1);
  printf("Nome da cidade: %s \n", nome_cidade_1);
  printf("População: %d \n", populacao_1);
  printf("Área: %f \n", area_cid_1);
  printf("PIB: %f \n",  pib_cid_1);
  printf("Número de pontos turísticos: %d \n \n", n_pontos_turisticos_1);

  printf("Carta 2 \n");
  printf("Estado: %s \n", estado_2);
  printf("Código: %s%s \n", estado_2,cod_carta_2);
  printf("Nome da cidade: %s \n", nome_cidade_2);
  printf("População: %d \n", populacao_2);
  printf("Área: %f \n", area_cid_2);
  printf("PIB: %f \n",  pib_cid_2);
  printf("Número de pontos turísticos: %d \n", n_pontos_turisticos_2);

  return 0;

}
