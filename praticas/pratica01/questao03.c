//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.//

#include <stdio.h>
#define PI 3.1416

int main() {

  int r;
  
  printf("Digite um número inteiro :");
  scanf("%i", &r);


 float P = 2 * PI * r;

printf("O perímetro é de %f cm\n ", P);
  
  return 0;
}