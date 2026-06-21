#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float ler_nota() {
  char linha[256];
  float nota;
  while (true) {
    if (fgets(linha, sizeof(linha), stdin) == NULL) {
      exit(1);
    }
    if (sscanf(linha, "%f", &nota) == 1) {
      return nota;
    }
    printf("\033[1;31mEntrada inválida. Por favor, digite um número válido: \033[0m");
  }
}

float nota_1, nota_2, nota_3, nota_4;
float media;

int main()
{
  printf("=== Calculadora de Média ===\n\n");

  printf("Digite a nota 1: ");
  nota_1 = ler_nota();

  printf("Digite a nota 2: ");
  nota_2 = ler_nota();
  
  printf("Digite a nota 3: ");
  nota_3 = ler_nota();

  printf("Digite a nota 4: ");
  nota_4 = ler_nota();
  
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
