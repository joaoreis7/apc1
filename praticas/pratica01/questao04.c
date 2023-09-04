//Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.//

#include <stdio.h>

int main() {

  float preco_inicial;
  const float ICMS = 0.17;
  const float COFINS = 0.076;
  const float PIS_PASEP = 0.0165;

  printf("Digite o valor do seu produto: ");
  scanf("%f", &preco_inicial);

  float preco_final = 1 + ICMS + COFINS + PIS_PASEP * preco_inicial;

  printf("o valor final do seu produto é de %f\n", preco_final);

  return 0;
}