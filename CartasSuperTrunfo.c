#include <stdio.h>
#include <string.h>

int main() {
    //***SUPER TRUNFO***
    //Desenvolvido por: Gabriel Ribeiro dos Santos

    // Declaração de variáveis

    // CARTA 1
    char nome1[60], nome_attr1[40];
    unsigned int populacao1, pontos1, atributo1;
    float area1, densidade1, pib1, pib_reais1,  ppc1;
    float valor_attr1_c1 = 0, valor_attr1_c2 = 0, resultado1 = 0;

    // CARTA 2
    char nome2[60], nome_attr2[40];
    unsigned int populacao2, pontos2, atributo2;
    float area2, densidade2, pib2, pib_reais2, ppc2; 
    float valor_attr2_c1 = 0, valor_attr2_c2 = 0, resultado2 = 0;

    // Mensagem de boas-vindas
    printf("Bem-vindo ao SUPER TRUNFO!\n\n");

    // **CADASTRO CARTA 1**
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

    getchar();  // Limpa o buffer 

    // **CADASTRO CARTA 2**
    printf("\nInsira os dados da carta 2.\n\n");

    // NOME DO PAÍS
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
    
    //**CALCULANDO DENSIDADE POPULACIONAL**
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    //**CALCULANDO PIB PER CAPTA**
    pib_reais1 = pib1 * 1000000000.0;
    pib_reais2 = pib2 * 1000000000.0;
    ppc1 = pib_reais1 / (float)populacao1;
    ppc2 = pib_reais2 / (float)populacao2;

    // *Exibindo os dados ao usuário:*

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

    //**SELECIONANDO OS ATRIBUTOS DE COMPARAÇÃO:**
    //ATRIBUTO 1
    printf("Selecione o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    printf("Escolha uma opção: \n\n");
    scanf("%d", &atributo1);

    // Validar se o atributo é válido
    if (atributo1 < 1  || atributo1 > 5) {
        printf("Erro: Atributo inválido. Tente novamente.\n");
        return 0;
    } 

    //ATRIBUTO 1 - *Atribuindo os valores*
   switch (atributo1) {
    case 1:
        strcpy(nome_attr1, "População");
        valor_attr1_c1 = populacao1;
        valor_attr1_c2 = populacao2;
        break;
    case 2:
        strcpy(nome_attr1, "Área");
        valor_attr1_c1 = area1;
        valor_attr1_c2 = area2;
        break;
    case 3:
        strcpy(nome_attr1, "PIB per capita");
        valor_attr1_c1 = ppc1;
        valor_attr1_c2 = ppc2;
        break;
    case 4:
        strcpy(nome_attr1, "Pontos turísticos");
        valor_attr1_c1 = pontos1;
        valor_attr1_c2 = pontos2;
        break;
    case 5:
        strcpy(nome_attr1, "Densidade demográfica");
        valor_attr1_c1 = densidade1;
        valor_attr1_c2 = densidade2;
        break;
    default:
        printf("Opção inválida! Tente novamente.\n");
        return 0;
    }

    //**MENU INTERATIVO**
    printf("Selecione o segundo atributo (diferente do primeiro):\n");
    (atributo1 != 1) ? printf("1. População\n") : 0;
    (atributo1 != 2) ? printf("2. Área\n") : 0;
    (atributo1 != 3) ? printf("3. PIB per capita\n") : 0;
    (atributo1 != 4) ? printf("4. Pontos turísticos\n") : 0;
    (atributo1 != 5) ? printf("5. Densidade demográfica\n") : 0;
    printf("Escolha uma opção: \n\n");
    scanf("%d", &atributo2);

    // Validar se o atributo é válido
    if (atributo2 < 1  || atributo2 > 5) {
        printf("Erro: Atributo inválido. Tente novamente.\n");
        return 0;
    } 

    //ATRIBUTO 2 - *Atribuindo os valores*
    switch (atributo2) {
    case 1:
        strcpy(nome_attr2, "População");
        valor_attr2_c1 = populacao1;
        valor_attr2_c2 = populacao2;
        break;
    case 2:
        strcpy(nome_attr2, "Área");
        valor_attr2_c1 = area1;
        valor_attr2_c2 = area2;
        break;
    case 3:
        strcpy(nome_attr2, "PIB per capita");
        valor_attr2_c1 = ppc1;
        valor_attr2_c2 = ppc2;
        break;
    case 4:
        strcpy(nome_attr2, "Pontos turísticos");
        valor_attr2_c1 = pontos1;
        valor_attr2_c2 = pontos2;
        break;
    case 5:
        strcpy(nome_attr2, "Densidade demográfica");
        valor_attr2_c1 = densidade1;
        valor_attr2_c2 = densidade2;
        break;
    default:
        printf("Opção inválida! Tente novamente.\n");
        return 0;
    }

    //**COMPARANDO OS ATRIBUTOS**

    printf("\n### COMPARAÇÃO DE CARTAS ###\n");

    //ATRIBUTO 1
    printf("\nAtributo 1: %s\n", nome_attr1);
    //Se o atributo for população ou pontos turísticos, será exibido um número inteiro
    (atributo1 == 1 || atributo1 == 4) ? printf("%s: %.0f\n", nome1, valor_attr1_c1) : printf("%s: %.2f\n", nome1, valor_attr1_c1);
    (atributo1 == 1 || atributo1 == 4) ? printf("%s: %.0f\n\n", nome2, valor_attr1_c2) : printf("%s: %.2f\n\n", nome2, valor_attr1_c2);

    if (valor_attr1_c1 == valor_attr1_c2) {
        //Empate
        printf("Resultado: Empate!\n\n");
    } else {
        //Imprime o vencedor do atributo 1
        (atributo1 == 5) ?
        (valor_attr1_c1 < valor_attr1_c2 ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nome1) : (valor_attr1_c1 > valor_attr1_c2 ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2) : 0)) :
        (valor_attr1_c1 > valor_attr1_c2 ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nome1) : (valor_attr1_c1 < valor_attr1_c2 ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2) : 0));
    
        //Atribui o ponto ao vencedor do atributo 1    
        (atributo1 == 5) ?
        (valor_attr1_c1 < valor_attr1_c2 ? resultado1++ : (valor_attr1_c1 > valor_attr1_c2 ? resultado2++ : 0)) :
        (valor_attr1_c1 > valor_attr1_c2 ? resultado1++ : (valor_attr1_c1 < valor_attr1_c2 ? resultado2++ : 0));
    }  

    //ATRIBUTO 2
    printf("\nAtributo 2: %s\n", nome_attr2);
    //Se o atributo for população ou pontos turísticos, será exibido um número inteiro
    (atributo2 == 1 || atributo2 == 4) ? printf("%s: %.0f\n", nome1, valor_attr2_c1) : printf("%s: %.2f\n", nome1, valor_attr2_c1);
    (atributo2 == 1 || atributo2 == 4) ? printf("%s: %.0f\n\n", nome2, valor_attr2_c2) : printf("%s: %.2f\n\n", nome2, valor_attr2_c2);

    if (valor_attr2_c1 == valor_attr2_c2) {
        //Empate
        printf("Resultado: Empate!\n\n");    
    } else {
        //Imprime o vencedor do atributo 2
        (atributo2 == 5) ?
        (valor_attr2_c1 < valor_attr2_c2 ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nome1) : (valor_attr2_c1 > valor_attr2_c2 ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2) : 0)) :
        (valor_attr2_c1 > valor_attr2_c2 ? printf("Resultado: Carta 1 (%s) venceu!\n\n", nome1) : (valor_attr2_c1 < valor_attr2_c2 ? printf("Resultado: Carta 2 (%s) venceu!\n\n", nome2) : 0));

        //Atribui o ponto ao vencedor do atributo 2
        (atributo2 == 5) ?
        (valor_attr2_c1 < valor_attr2_c2 ? resultado1++ : (valor_attr2_c1 > valor_attr2_c2 ? resultado2++ : 0)) :
        (valor_attr2_c1 > valor_attr2_c2 ? resultado1++ : (valor_attr2_c1 < valor_attr2_c2 ? resultado2++ : 0));  
    } 
    
    //**DETERMINANDO O VENCEDOR**
    printf("\n### RESULTADO FINAL ###\n");
    printf("%s - Pontos: %.0f\n", nome1, resultado1);
    printf("%s - Pontos: %.0f\n\n", nome2, resultado2);

    if (resultado1 > resultado2) {
        printf("***Vencedor: Carta 1 - %s***\n", nome1);
    } else if (resultado1 > resultado2) {
        printf("***Vencedor: Carta 2 - %s***\n", nome2);
    } else {
        printf("***Empate!***\n");
    }

    return 0;
    //***FIM***
}
