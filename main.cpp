#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <stdbool.h>

bool ler_nota(const char* prompt, float* nota) {
    char buffer[256];
    while (true) {
        printf("%s", prompt);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("\n");
            return false;
        }
        if (sscanf(buffer, "%f", nota) == 1) {
            return true;
        }
        printf("\033[1;31mEntrada inválida. Por favor, digite um número.\033[0m\n");
    }
}

float nota_1, nota_2, nota_3, nota_4;
float media;

int main()
{
  printf("=== Calculadora de Média ===\n\n");
  if (!ler_nota("Digite a nota 1: ", &nota_1)) return 1;
  if (!ler_nota("Digite a nota 2: ", &nota_2)) return 1;
  if (!ler_nota("Digite a nota 3: ", &nota_3)) return 1;
  if (!ler_nota("Digite a nota 4: ", &nota_4)) return 1;
  
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
