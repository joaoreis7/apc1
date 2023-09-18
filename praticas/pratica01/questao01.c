#include <stdio.h>

int main() {
  float a1;
  float a2;
  
  printf("Digite sua nota da a1: ");
  scanf("%f", &a1);

   printf("Digite sua nota da a2: ");
  scanf("%f", &a2);

  float media = 0.4 * a1 + 0.6 * a2;
  
  printf("A média é %f\n", media);
  return 0;
}