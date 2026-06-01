#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float nota_1, nota_2, nota_3, nota_4;
float media;

int main()
{
  printf("📊 === Calculadora de Média ===\n\n");
  printf("Digite a nota 1: ");
  if (scanf("%f", &nota_1) != 1) { printf("❌ Erro: Entrada inválida. Por favor, insira um número válido.\n"); return 1; }

  printf("Digite a nota 2: ");
  if (scanf("%f", &nota_2) != 1) { printf("❌ Erro: Entrada inválida. Por favor, insira um número válido.\n"); return 1; }
  
  printf("Digite a nota 3: ");
  if (scanf("%f", &nota_3) != 1) { printf("❌ Erro: Entrada inválida. Por favor, insira um número válido.\n"); return 1; }

  printf("Digite a nota 4: ");
  if (scanf("%f", &nota_4) != 1) { printf("❌ Erro: Entrada inválida. Por favor, insira um número válido.\n"); return 1; }
  
  media = ((nota_1 + nota_2 + nota_3 + nota_4) / 4);
  printf("\n📈 Média final: %.2f (Mínimo para aprovação: 7.00)", media);
  
  if(media >= 7)
  {
    printf("\n\n\033[1;32m✅ Aprovado(a)!\033[0m\n\n");
  }
  else
  {
    printf("\n\n\033[1;31m❌ Reprovado(a)!\033[0m\n\n");
  }

  return 0;
}
