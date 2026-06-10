#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

int ler_nota(float *nota) {
  if (scanf("%f", nota) != 1) {
    printf("\033[1;31mErro: Entrada inválida. Por favor, digite um número.\033[0m\n");
    return 0;
  }
  return 1;
}

int main()
{
  printf("=== Calculadora de Média ===\n\n");
  printf("Digite a nota 1: ");
  if (!ler_nota(&nota_1)) return 1;

  printf("Digite a nota 2: ");
  if (!ler_nota(&nota_2)) return 1;
  
  printf("Digite a nota 3: ");
  if (!ler_nota(&nota_3)) return 1;

  printf("Digite a nota 4: ");
  if (!ler_nota(&nota_4)) return 1;
  
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
