#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

int main()
{
  printf("Digite a nota 1: ");
  if (scanf("%f", &nota_1) != 1) return 1;

  printf("Digite a nota 2: ");
  if (scanf("%f", &nota_2) != 1) return 1;
  
  printf("Digite a nota 3: ");
  if (scanf("%f", &nota_3) != 1) return 1;

  printf("Digite a nota 4: ");
  if (scanf("%f", &nota_4) != 1) return 1;
  
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
