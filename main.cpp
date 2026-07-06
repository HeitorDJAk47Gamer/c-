#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

float ler_nota(const char* prompt) {
  char buffer[256];
  float nota;
  while (true) {
    printf("%s", prompt);
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
      printf("\n");
      exit(1);
    }
    if (sscanf(buffer, "%f", &nota) == 1) {
      return nota;
    }
    printf("\033[1;31mEntrada inválida. Por favor, digite um número.\033[0m\n");
  }
}

int main()
{
  printf("=== Calculadora de Média ===\n\n");
  nota_1 = ler_nota("Digite a nota 1: ");
  nota_2 = ler_nota("Digite a nota 2: ");
  nota_3 = ler_nota("Digite a nota 3: ");
  nota_4 = ler_nota("Digite a nota 4: ");
  
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
