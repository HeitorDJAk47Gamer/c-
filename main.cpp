#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

float ler_nota(int num_nota) {
  float nota;
  while (true) {
    printf("Digite a nota %d: ", num_nota);
    int scan_result = scanf("%f", &nota);
    if (scan_result == 1) {
      return nota;
    } else if (scan_result == EOF) {
      printf("\nFim de arquivo detectado. Saindo.\n");
      exit(1);
    } else {
      printf("Entrada invalida. Por favor, digite um numero.\n");
      // Clear the input buffer
      int ch;
      while ((ch = getchar()) != '\n' && ch != EOF);
      if (ch == EOF) {
        printf("\nFim de arquivo detectado. Saindo.\n");
        exit(1);
      }
    }
  }
}

int main()
{
  printf("--- Calculadora de Media ---\n\n");

  nota_1 = ler_nota(1);
  nota_2 = ler_nota(2);
  nota_3 = ler_nota(3);
  nota_4 = ler_nota(4);
  
  media = ((nota_1 + nota_2 + nota_3 + nota_4) / 4);
  printf("\nMédia final: %.2f", media);
  
  if(media >= 7)
  {
    printf("\n\nAprovado(a)!\n\n");
  }
  else
  {
    printf("\n\nReprovado(a)!\n\n");
  }

  return 0;
}
