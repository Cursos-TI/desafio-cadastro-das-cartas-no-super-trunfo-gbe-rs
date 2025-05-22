#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis

    // CARTA 1
    char estado1, codigo1[10], nome1[20];
    unsigned int populacao1, pontos1;
    float area1, densidade1, pib1, pib_reais1,  ppc1;

    // CARTA 2
    char estado2, codigo2[10], nome2[20];
    unsigned int populacao2, pontos2;
    float area2, densidade2, pib2, pib_reais2, ppc2;

    // Mensagem de boas-vindas
    printf("Bem-vindo ao SUPER TRUNFO!\n\n");

    // CARTA 1
    printf("Insira os dados da carta 1.\n\n");

    // ESTADO
    printf("Digite o Estado (uma letra): ");
    scanf("%c", &estado1);  
    getchar();  // Limpa o buffer (para remover o '\n')

    // CÓDIGO
    printf("Digite o código: ");
    fgets(codigo1, sizeof(codigo1), stdin); // Lê o nome do código da carta 1
    codigo1[strcspn(codigo1, "\n")] = 0; // Remove o '\n' do final do código

    // NOME DA CIDADE
    printf("Digite o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin); // Lê o nome da cidade da carta 1
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

    // ESTADO
    getchar();  // Limpa o buffer 
    printf("Digite o Estado (uma letra): ");
    scanf("%c", &estado2);  

    // CÓDIGO
    printf("Digite o código: ");
    getchar();  // Limpa o buffer
    fgets(codigo2, sizeof(codigo2), stdin); // Lê o nome do código da carta 2
    codigo2[strcspn(codigo2, "\n")] = 0; // Remove o '\n' do final do código

    // NOME DA CIDADE
    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin); // Lê o nome da cidade da carta 2
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
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", ppc1);

    // CARTA 2
    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2); 
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n\n", ppc2);
    
    //DETERMINANDO A CARTA VENCEDORA
    //ATRIBUTO: PIB PER CAPITA

    printf("Comparação de cartas (Atributo: PIB PER CAPITA):\n\n");
    printf("Carta 1: %s(%c): %2f\n", nome1, estado1, ppc1);
    printf("Carta 2: %s(%c): %2f\n", nome2, estado2, ppc2);

    if (ppc1 > ppc2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }

    return 0;
}
