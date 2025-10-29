#include <stdio.h>

int main(){

// Informações da primeira carta onde serão armazenadas.

    char carta1 [50];
    char estado1 [50];
    char codigo1 [50];
    char cidade1 [50];
    int pontoturistico1;
    float area1, pib1;
    unsigned long int populacao1;
    
// Aqui será onde o usuário irá inserir os dados da primeira carta.

    printf("Carta1: \n");
    scanf("%s", carta1);

    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Codigo da Carta: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Populacao: \n");
    scanf("%u", &populacao1);
    
    printf("Area: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("NUmero de Pontos Turisticos: \n");
    scanf("%d", &pontoturistico1);
    
// Quebra de linha que faz ficar com visualização mais clara.

    printf("\n");

// Informações da segunda carta onde serão armazenadas.

    char carta2 [50];
    char estado2 [50];
    char codigo2 [50];
    char cidade2 [50];
    int pontoturistico2;
    float area2, pib2;
    unsigned long int populacao2;

// Aqui será onde o usuário irá inserir os dados da segunda carta.

    printf("Carta2: \n");
    scanf("%s", carta2);

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Codigo da Carta: \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Populacao: \n");
    scanf("%u", &populacao2);
    
    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &pontoturistico2);

// Quebra de linha que faz ficar com visualização mais clara.

    printf("\n");

// Esses comandos que irão executar as informações da primeira carta ao usuário.

    printf("Carta1: %s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %u\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontoturistico1);
    float divisaodensidade1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km2\n", divisaodensidade1);
    float divisaopib1 = pib1 * populacao1;
    printf("PIB Per Capita: %.2f reais\n", divisaopib1);
    
// Quebra de linha que faz ficar com visualização mais clara.

    printf("\n");

// Esses comandos que irão executar as informações da segunda carta ao usuário.

    printf("Carta2: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontoturistico2);
    float divisaodensidade2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f hab/km2\n", divisaodensidade2);
    float divisaopib2 = pib2 * populacao2;
    printf("PIB Per Capita: %.2f reais\n", divisaopib2);

// Quebra de linha que faz ficar com visualização mais clara.

    printf("\n");

// Calculando o Super Poder.

    float superPoder1 = (populacao1 / 1000) + (area1 / 100) + (pib1 / 10) + (pontoturistico1 * 10) + divisaopib1 + (divisaodensidade1 / 1000);
    float superPoder2 = (populacao2 / 1000) + (area2 / 100) + (pib2 / 10) + (pontoturistico2 * 10) + divisaopib2 + (divisaodensidade2 / 1000);

    printf("\n");

// Exibindo o Super Poder.

    printf("Super Poder da Carta1: %.2f\n", superPoder1);
    printf("Super Poder da Carta2: %.2f\n", superPoder2);

    printf("\n");

// Comparando os Super Poderes.

    printf("Populacao: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu" : (populacao1 < populacao2) ? "Carta 2 venceu" : "Empate");
    printf("Area: %s\n", (area1 > area2) ? "Carta 1 venceu" : (area1 < area2) ? "Carta 2 venceu" : "Empate");
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 venceu" : (pib1 < pib2) ? "Carta 2 venceu" : "Empate");
    printf("Pontos Turisticos: %s\n", (pontoturistico1 > pontoturistico2) ? "Carta 1 venceu" : (pontoturistico1 < pontoturistico2) ? "Carta 2 venceu" : "Empate");
    printf("Densidade Populacional: %s\n", (divisaodensidade1 > divisaodensidade2) ? "Carta 1 venceu" : (divisaodensidade1 < divisaodensidade2) ? "Carta 2 venceu" : "Empate");
    printf("PIB Per Capita: %s\n", (divisaopib1 > divisaopib2) ? "Carta 1 venceu" : (divisaopib1 < divisaopib2) ? "Carta 2 venceu" : "Empate");

    printf("\n");
    
    printf("Super Poder: %s\n", (superPoder1 > superPoder2) ? "Carta 1 venceu" : (superPoder1 < superPoder2) ? "Carta 2 venceu" : "Empate");

    printf("\n");
    
// Aqui é onde se finaliza o código.

// Código feito por: Diego Hilton

    return 0;
}