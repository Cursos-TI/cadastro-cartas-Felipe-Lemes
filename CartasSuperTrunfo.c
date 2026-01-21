#include <stdio.h>

int main(){
    
// carta 1
int pontosT, populacao;
float PIB, area;
char estado[30], codigo[30], cidade[30];

// carta 2
int pontosT2, populacao2;
float PIB2, area2;
char estado2[30], codigo2[30], cidade2[30];

//leitura carta 1
printf("Digite um estado:\n");
scanf("%s", estado);
printf("Digite uma cidade:\n");
scanf("%s", cidade);
printf("Digite o código da carta:\n");
scanf("%s", codigo);
printf("Digite a aréa da Cidade:\n");
scanf("%f", &area);
printf("Digite a população da cidade:\n");
scanf("%d", &populacao);
printf("Digite o PIB da cidade:\n");
scanf("%f", &PIB);
printf("Digite a quantidade de pontos turisticos da cidade:\n");
scanf("%d", &pontosT);

//leitura carta 2
printf("Digite um estado:\n");
scanf("%s", estado2);
printf("Digite uma cidade:\n");
scanf("%s", cidade2);
printf("Digite o código da carta:\n");
scanf("%s", codigo2);
printf("Digite o aréa da Cidade:\n");
scanf("%f", &area2);
printf("Digite a população da cidade:\n");
scanf("%d", &populacao2);
printf("Digite o PIB da cidade:\n");
scanf("%f", &PIB2);
printf("Digite a quandidade de pontos turisticos da cidade:\n");
scanf("%d", &pontosT2);

printf("\n============================\n");
printf("        RESULTADOS\n");
printf("============================\n\n");

//RESULTADO CARTA 1
printf("CARTA 1\n");
printf("Estado: %s - Cidade: %s - Codigo da Carta: %s\n", estado, cidade, codigo);
printf("Aréa: %.2f - populçao: %d - PIB: %.2f\n", area, populacao, PIB);
printf("pontos turisticos: %d\n", pontosT);

printf("\n\n----------------------------\n\n");

//RESULTADO CARTA 2
printf("CARTA 2\n");
printf("Estado: %s - Cidade: %s - Código da Carta: %s\n", estado2, cidade2, codigo2);
printf("Aréa: %.2f - populçao: %d - PIB: %.2f\n", area2, populacao2, PIB2);
printf("pontos turisticos: %d", pontosT2);

return 0;
} 
