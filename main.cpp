#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

int main()
{
  printf("=== Calculadora de Média ===\n\n");
  printf("Digite a nota 1: ");
  if (scanf("%f", &nota_1) != 1) { printf("\n\033[1;31mErro: Entrada inválida!\033[0m\n"); return 1; }

  printf("Digite a nota 2: ");
  if (scanf("%f", &nota_2) != 1) { printf("\n\033[1;31mErro: Entrada inválida!\033[0m\n"); return 1; }
  
  printf("Digite a nota 3: ");
  if (scanf("%f", &nota_3) != 1) { printf("\n\033[1;31mErro: Entrada inválida!\033[0m\n"); return 1; }

  printf("Digite a nota 4: ");
  if (scanf("%f", &nota_4) != 1) { printf("\n\033[1;31mErro: Entrada inválida!\033[0m\n"); return 1; }
  
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
