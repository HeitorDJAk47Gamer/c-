#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float media;

float ler_nota(int num) {
  char linha[256];
  float nota;
  while(1) {
    printf("Digite a nota %d (0 a 10): ", num);
    if (fgets(linha, sizeof(linha), stdin) == NULL) {
      exit(1);
    }

    char extra;
    int res = sscanf(linha, "%f %c", &nota, &extra);
    if (res == 1) {
      if (nota >= 0 && nota <= 10) {
        return nota;
      } else {
        printf("\033[1;33mAviso: A nota deve estar entre 0 e 10.\033[0m\n");
      }
    } else {
      printf("\033[1;31mErro: Entrada inválida. Por favor, digite um número válido.\033[0m\n");
    }
  }
}

int main()
{
  printf("\033[1;36m=== Calculadora de Média ===\033[0m\n\n");
  
  float nota_1 = ler_nota(1);
  float nota_2 = ler_nota(2);
  float nota_3 = ler_nota(3);
  float nota_4 = ler_nota(4);
  
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
