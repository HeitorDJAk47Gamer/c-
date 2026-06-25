#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float get_nota(int nota_num) {
    char buffer[256];
    float nota;
    while (1) {
        printf("Digite a nota %d: ", nota_num);
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("\n\033[1;31mEntrada encerrada inesperadamente.\033[0m\n");
            exit(1);
        }
        if (sscanf(buffer, "%f", &nota) == 1) {
            return nota;
        } else {
            printf("\033[1;31mEntrada inválida! Por favor, digite um número.\033[0m\n");
        }
    }
}

float nota_1, nota_2, nota_3, nota_4;
float media;

int main()
{
  printf("=== Calculadora de Média ===\n\n");
  nota_1 = get_nota(1);
  nota_2 = get_nota(2);
  nota_3 = get_nota(3);
  nota_4 = get_nota(4);
  
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
