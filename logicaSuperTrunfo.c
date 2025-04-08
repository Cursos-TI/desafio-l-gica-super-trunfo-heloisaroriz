#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    printf("Desafio Super Trunfo - Países\n");
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2, atributo1,atributo2, pontos1, pontos2;
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


// Comparação de Cartas: Nivel 1

    printf("\nUtilizando a população das cartas para a comparação vamos descobrir quem venceu.\n\n");
    printf("Carta 1 - %s (%s): %d \n", estado1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d \n", estado2, codigo2, populacao2);

    // Utilizando estrutura de decisão if-else para comparar atributo de população

    if (populacao1 > populacao2) {
      printf("Resultado: Carta 1 (%s) venceu. \n", estado1);
    } else {
      printf("Resultado: Carta 2 (%s) venceu.\n", estado2);
    }

//Nível 2
    printf("\n---------- Menu de Comparação de Cartas ----------\n");
    printf("Você irá escolher um atributo para comparar as cartas!\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número correspondente ao atributo: ");
    scanf("%d", &atributo1);

    printf("\nComparando as cartas com base no atributo selecionado:\n");

    switch (atributo1) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nomecidade1, populacao1);
            printf("%s: %d habitantes\n", nomecidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nomecidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomecidade1, area1);
            printf("%s: %.2f km²\n", nomecidade2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nomecidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", nomecidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", nomecidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nomecidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", nomecidade1, pontosturisticos1);
            printf("%s: %d pontos turísticos\n", nomecidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2)
                printf("Resultado: %s venceu!\n", nomecidade1);
            else if (pontosturisticos2 > pontosturisticos1)
                printf("Resultado: %s venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomecidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomecidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", nomecidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opção inválida. Por favor, execute o programa novamente e escolha uma opção válida.\n");
    }
//Nível 3

// Menu de comparação da escolha do jogador(Nível mestre)
    printf("\n---------- Menu de Comparação ----------\n");
    printf("\nAgora é sua vez de escolher 2 atributos que definirão a carta ser a vencedora. \n");
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção (1 a 5): ");
    scanf("%d", &atributo1);
     if (atributo1 < 1 || atributo1 > 5) {
       printf("Erro: Valor inválido, tente novamente \n"); 
      return 1;
    }

    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Número de Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demográfica\n");
    printf("Digite o segundo atributo: ");
    scanf("%d", &atributo2);

     if (atributo2 == atributo1) {
        printf("\nVocê escolheu o mesmo atributo duas vezes. Reinicie e escolha atributos diferentes.\n");
        if (atributo2 < 1 || atributo2 > 5)
          printf("Erro: Valor inválido, tente novamente \n");
     return 1;
    }
printf("\n---------- Resultado da Comparação ----------\n");

// --- Comparação do primeiro atributo ---
if (atributo1 == 1) {
    printf("\nPopulação:\n%s: %d | %s: %d\n", nomecidade1, populacao1, nomecidade2, populacao2);
    pontos1 += (populacao1 > populacao2) ? 1 : 0;
    pontos2 += (populacao2 > populacao1) ? 1 : 0;
} else if (atributo1 == 2) {
    printf("\nÁrea:\n%s: %.2f km² | %s: %.2f km²\n", nomecidade1, area1, nomecidade2, area2);
    pontos1 += (area1 > area2) ? 1 : 0;
    pontos2 += (area2 > area1) ? 1 : 0;
} else if (atributo1 == 3) {
    printf("\nPIB:\n%s: %.2f bi | %s: %.2f bi\n", nomecidade1, pib1, nomecidade2, pib2);
    pontos1 += (pib1 > pib2) ? 1 : 0;
    pontos2 += (pib2 > pib1) ? 1 : 0;
} else if (atributo1 == 4) {
    printf("\nPontos Turísticos:\n%s: %d | %s: %d\n", nomecidade1, pontosturisticos1, nomecidade2, pontosturisticos2);
    pontos1 += (pontosturisticos1 > pontosturisticos2) ? 1 : 0;
    pontos2 += (pontosturisticos2 > pontosturisticos1) ? 1 : 0;
} else if (atributo1 == 5) {
    printf("\nDensidade Demográfica (menor vence):\n%s: %.2f hab/km² | %s: %.2f hab/km²\n", nomecidade1, densidade1, nomecidade2, densidade2);
    pontos1 += (densidade1 < densidade2) ? 1 : 0;
    pontos2 += (densidade2 < densidade1) ? 1 : 0;
}

// --- Comparação do segundo atributo ---
if (atributo2 == 1) {
    printf("\nPopulação:\n%s: %d | %s: %d\n", nomecidade1, populacao1, nomecidade2, populacao2);
    pontos1 += (populacao1 > populacao2) ? 1 : 0;
    pontos2 += (populacao2 > populacao1) ? 1 : 0;
} else if (atributo2 == 2) {
    printf("\nÁrea:\n%s: %.2f km² | %s: %.2f km²\n", nomecidade1, area1, nomecidade2, area2);
    pontos1 += (area1 > area2) ? 1 : 0;
    pontos2 += (area2 > area1) ? 1 : 0;
} else if (atributo2 == 3) {
    printf("\nPIB:\n%s: %.2f bi | %s: %.2f bi\n", nomecidade1, pib1, nomecidade2, pib2);
    pontos1 += (pib1 > pib2) ? 1 : 0;
    pontos2 += (pib2 > pib1) ? 1 : 0;
} else if (atributo2 == 4) {
    printf("\nPontos Turísticos:\n%s: %d | %s: %d\n", nomecidade1, pontosturisticos1, nomecidade2, pontosturisticos2);
    pontos1 += (pontosturisticos1 > pontosturisticos2) ? 1 : 0;
    pontos2 += (pontosturisticos2 > pontosturisticos1) ? 1 : 0;
} else if (atributo2 == 5) {
    printf("\nDensidade Demográfica (menor vence):\n%s: %.2f hab/km² | %s: %.2f hab/km²\n", nomecidade1, densidade1, nomecidade2, densidade2);
    pontos1 += (densidade1 < densidade2) ? 1 : 0;
    pontos2 += (densidade2 < densidade1) ? 1 : 0;
}

// Resultado final
printf("\n---------- Resultado Final ----------\n");
printf("%s: %d pontos | %s: %d pontos\n", nomecidade1, pontos1, nomecidade2, pontos2);

(pontos1 > pontos2) ? printf("Vencedor: %s\n", nomecidade1) :
(pontos2 > pontos1) ? printf("Vencedor: %s\n", nomecidade2) :
printf("Empate!\n");
   

    
    return 0;
}
