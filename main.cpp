#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

int main()
{
  printf("=== Calculadora de Média ===\n\n");
  char buffer[100];

  while (true) {
    printf("Digite a nota 1: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) return 1;
    if (sscanf(buffer, "%f", &nota_1) == 1) break;
    printf("\033[1;31mEntrada inválida. Por favor, digite um número.\033[0m\n");
  }

  while (true) {
    printf("Digite a nota 2: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) return 1;
    if (sscanf(buffer, "%f", &nota_2) == 1) break;
    printf("\033[1;31mEntrada inválida. Por favor, digite um número.\033[0m\n");
  }
  
  while (true) {
    printf("Digite a nota 3: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) return 1;
    if (sscanf(buffer, "%f", &nota_3) == 1) break;
    printf("\033[1;31mEntrada inválida. Por favor, digite um número.\033[0m\n");
  }

  while (true) {
    printf("Digite a nota 4: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) return 1;
    if (sscanf(buffer, "%f", &nota_4) == 1) break;
    printf("\033[1;31mEntrada inválida. Por favor, digite um número.\033[0m\n");
  }
  
  media = ((nota_1 + nota_2 + nota_3 + nota_4) / 4);
  printf("\nMédia final: %.2f", media);
  
  if(media >= 7)
  {
    printf("\n\n\033[1;32mAprovado(a)!\033[0m\n\n");
  }
  else
  {
    printf("\n\n\033[1;31mReprovado(a)!\033[0m\n\n");
  }

  return 0;
}
