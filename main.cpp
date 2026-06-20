#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

void ler_nota(int num, float *nota) {
  char buffer[100];
  while (1) {
    printf("Digite a nota %d: ", num);
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
      printf("\n");
      exit(1);
    }
    if (sscanf(buffer, "%f", nota) == 1) {
      break;
    }
    printf("\033[1;33mEntrada inválida! Por favor, digite um número.\033[0m\n");
  }
}

int main()
{
  printf("=== Calculadora de Média ===\n\n");
  ler_nota(1, &nota_1);
  ler_nota(2, &nota_2);
  ler_nota(3, &nota_3);
  ler_nota(4, &nota_4);
  
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
