#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis

    // CARTA 1
    char nome1[20];
    unsigned int populacao1, pontos1, atributo_selecionado;
    float area1, densidade1, pib1, pib_reais1,  ppc1;

    // CARTA 2
    char nome2[20];
    unsigned int populacao2, pontos2;
    float area2, densidade2, pib2, pib_reais2, ppc2;

    // Mensagem de boas-vindas
    printf("Bem-vindo ao SUPER TRUNFO!\n\n");

    // CARTA 1
    printf("Insira os dados da carta 1.\n\n");

    // NOME DO PAÍS
    printf("Digite o nome do País: ");
    fgets(nome1, sizeof(nome1), stdin); // Lê o nome do país da carta 1
    nome1[strcspn(nome1, "\n")] = 0; // Remove o '\n' do final do nome

    // POPULAÇÃO
    printf("Digite o número de habitantes: ");
    scanf("%u", &populacao1);

    // ÁREA
    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    // PIB
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    // PONTOS TURÍSTICOS
    printf("Digite o número de pontos turísticos: ");
    scanf("%u", &pontos1);

    // CARTA 2
    printf("\nInsira os dados da carta 2.\n\n");

    // NOME DO PAÍS
    getchar();  // Limpa o buffer 
    printf("Digite o nome do País: ");
    fgets(nome2, sizeof(nome2), stdin); // Lê o nome do país da carta 2
    nome2[strcspn(nome2, "\n")] = 0; // Remove o '\n' do final do nome

    // POPULAÇÃO
    printf("Digite o número de habitantes: ");
    scanf("%u", &populacao2);

    // ÁREA
    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    // PIB
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    // PONTOS TURÍSTICOS
    printf("Digite o número de pontos turísticos: ");
    scanf("%u", &pontos2);
    
    //CALCULANDO DENSIDADE POPULACIONAL
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    //CALCULANDO PIB PER CAPTA
    pib_reais1 = pib1 * 1000000000.0;
    pib_reais2 = pib2 * 1000000000.0;
    ppc1 = pib_reais1 / (float)populacao1;
    ppc2 = pib_reais2 / (float)populacao2;

    // Exibindo os dados ao usuário:

    // CARTA 1
    printf("\nCarta 1:\n\n");
    printf("Nome do País: %s \n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", ppc1);

    // CARTA 2
    printf("\nCarta 2:\n\n");
    printf("Nome do País: %s\n", nome2); 
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n\n", ppc2);

    //SELECIONANDO O ATRIBUTO DE COMPARAÇÃO:
    printf("Selecione um Atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    printf("Escolha uma opção: \n\n");
    scanf("%d", &atributo_selecionado);

    switch (atributo_selecionado) {
        case 1:
            //ATRIBUTO: POPULAÇÃO

                printf("Comparação de cartas (Atributo: POPULAÇÃO):\n\n");
                printf("Carta 1: %s: %u\n", nome1, populacao1);
                printf("Carta 2: %s: %u\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else  if (populacao1 < populacao2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!");
            }       
            break;
        case 2:
            //ATRIBUTO: ÁREA

                printf("Comparação de cartas (Atributo: ÁREA):\n\n");
                printf("Carta 1: %s: %.2f\n", nome1, area1);
                printf("Carta 2: %s: %.2f\n", nome2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else  if (area1 < area2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!");
            }       
            break;
        case 3:
            //ATRIBUTO: PIB PER CAPITA

                printf("Comparação de cartas (Atributo: PIB PER CAPITA):\n\n");
                printf("Carta 1: %s: %.2f\n", nome1, ppc1);
                printf("Carta 2: %s: %.2f\n", nome2, ppc2);

            if (ppc1 > ppc2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else  if (ppc1 < ppc2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!");
            }       
            break;
        case 4:
               //ATRIBUTO: NÚMERO DE PONTOS TURÍSTICOS

                printf("Comparação de cartas (Atributo: NÚMERO DE PONTOS TURÍSTICOS):\n\n");
                printf("Carta 1: %s: %u\n", nome1, pontos1);
                printf("Carta 2: %s: %u\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else  if (pontos1 < pontos2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!");
            }       
            break;
        case 5:
            //ATRIBUTO: DENSIDADE DEMOGRÁFICA

                printf("Comparação de cartas (Atributo: DENSIDADE DEMOGRÁFICA):\n\n");
                printf("Carta 1: %s: %.2f\n", nome1, densidade1);
                printf("Carta 2: %s: %.2f\n", nome2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else  if (densidade1 > densidade2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!");
            }       
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}
