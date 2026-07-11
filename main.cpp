#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

float read_nota(int num) {
  char buffer[100];
  float nota;
  while (1) {
    printf("Digite a nota %d: ", num);
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
      printf("\nEntrada encerrada inesperadamente.\n");
      exit(1);
    }
    if (sscanf(buffer, "%f", &nota) == 1) {
      return nota;
    } else {
      printf("\033[1;31mEntrada inválida! Por favor, digite um número.\033[0m\n");
    }
  }
}

int main()
{
  printf("=== Calculadora de Média ===\n\n");
  
  nota_1 = read_nota(1);
  nota_2 = read_nota(2);
  nota_3 = read_nota(3);
  nota_4 = read_nota(4);
  
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
