#include<studio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

main()
{
  printf("Digite a nota 1:");
  scanf("%f", &nota_1);

  printf("Digite a nota 2:");
  scanf("%f", &nota_2);
  
  printf("Digite a nota 3:");
  scanf("%f", &nota_3);

  printf("Digite a nota 3:");
  scanf("%f", &nota_3);
  
  media = ((nota_1 + nota_2 + nota_3 + nota_4) / 4);
  printf("%.2f",media);
  
  if(media>=7)
  {
    printf("\n\nAprovado(a)!\n\n");
  }
  else
  {
    printf("\n\nReprovado(a)!\n\n");
  }
  sytem ("pause");
}
