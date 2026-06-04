#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

int ler_nota(int num, float *nota) {
  printf("Digite a nota %d: ", num);
  if (scanf("%f", nota) != 1) {
    printf("\n\033[1;31mErro: Entrada inválida. Por favor, digite um número válido.\033[0m\n");
    return 0;
  }
  return 1;
}

int main()
{
  printf("\033[1;36m=== Calculadora de Média ===\033[0m\n\n");
  
  if (!ler_nota(1, &nota_1)) return 1;
  if (!ler_nota(2, &nota_2)) return 1;
  if (!ler_nota(3, &nota_3)) return 1;
  if (!ler_nota(4, &nota_4)) return 1;
  
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
