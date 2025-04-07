#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    printf("Desafio Super Trunfo - Países\n");
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2, atributo1,atributo2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibcapita1, pibcapita2;
    
    
//Iniciciando o cadastro das cartas
    printf("Bem-vindo ao nivel 2 do desafio de Cartas Super Trunfo - Países! Antes de começar o jogo você precisa cadastrar suas cartas. Vamos lá? \n");
    
// Dados da primeira carta
    printf("\n----------Carta 1----------\n\n");
    printf("Digite o nome de um estado: \n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta 1 (ex: SP): \n");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade 1: \n");
    scanf("%s", nomecidade1);
    
    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a área da cidade 1 (em km²): \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);
    
    printf("Digite o número de Pontos Turísticos na cidade 1: \n");
    scanf("%d", &pontosturisticos1);
        
//Calculando Densidade e Pib per Capita da primeira carta
    densidade1 =  populacao1 / (float)area1;
    pibcapita1 = (pib1 * 1000000000) / (float)populacao1; 
    
//Dados da segunda carta
    printf("\n----------Carta 2----------\n\n");
     printf("Digite o nome de um estado: \n");
    scanf("%s", estado2);
    
    printf("Digite o código da carta 2 (ex: RJ): \n");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nomecidade2);
    
    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a área da cidade 2 (em km²): \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);
    
    printf("Digite o número de Pontos Turísticos da cidade 2: \n");
    scanf("%d", &pontosturisticos2);
        
//Calculando Densidade e Pib per Capita da segunda carta
    densidade2 = populacao2 / (float)area2;
    pibcapita2 = (pib2 * 1000000000) / (float)populacao2; 

    printf("\n----------Exibindo os valores das cartas---------- \n\n"); 
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomecidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibcapita1);

    printf("\n Carta 2: \n\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibcapita2);

// Comparação de Cartas: Nivel intermediário

    printf("\nUtilizando a população das cartas para a comparação vamos descobrir quem venceu.\n\n");
    printf("Carta 1 - %s (%s): %d \n", estado1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d \n", estado2, codigo2, populacao2);

// Utilizando estrutura de decisão if-else para comparar atributo de população

    if (populacao1 > populacao2) {
      printf("Resultado: Carta 1 (%s) venceu. \n", estado1);
    } else {
     printf("Resultado: Carta 2 (%s) venceu.\n", estado2);
    }
// Menu de comparação da escolha do jogador
    printf("\n---------- Menu de Comparação ----------\n");
    printf("\nAgora é sua vez de escolher o atributo que será comparado para a carta ser a vencedora. \n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção (1 a 5): ");
    scanf("%d", &atributo1);

    printf("\n---------- Resultado da Comparação ----------\n");

    switch (atributo1) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %d | %s: %d\n", nomecidade1, populacao1, nomecidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomecidade1);
            } else if (populacao2 > populacao1) { 
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", nomecidade1, area1, nomecidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomecidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhões | %s: %.2f bilhões\n", nomecidade1, pib1, nomecidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomecidade1);
            } else if  (pib2 > pib1) {
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d | %s: %d\n", nomecidade1, pontosturisticos1, nomecidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Vencedor: %s\n", nomecidade1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Comparando Densidade Demográfica (menor vence):\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", nomecidade1, densidade1, nomecidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", nomecidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
//Nível mestre
    printf("\nAgora você irá escolher 2 atributos para serem comparados e com isso determinar a carta vencedora. \n");
    printf("Escolha o primeiro atributo de comparação\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número correspondente: \n");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
        case 1:
        printf("VocÊ escolheu Populacão");
        
        break;
        case 2:
        /* code */
        break;
        case 3:
        /* code */
        break;
        case 4:
        /* code */
        break;
        case 5:
        /* code */
        break;
    
    default:
        break;
    }



    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número correspondente: \n");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
        printf("\nVocê escolheu o mesmo atributo duas vezes. Reinicie e escolha atributos diferentes.\n");

    return 0;
}
