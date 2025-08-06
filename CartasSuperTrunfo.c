#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Inicio Desafio novato

     //Variaveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float pib_per_capita1;
    float super_poder1;

    //Variaveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float pib_per_capita2;
    float super_poder2;

    printf("\n==============================\n");
    printf("     Super Trunfo: Cidades    \n");
    printf("==============================\n\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Entrada da carta 1 
    printf("Cadastro da Carta 1:\n");
    printf("\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1); // Espaço antes de %c evita o espaço do ENTER anterior

    printf("Digite o codigo da carta (wx: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1); 

    printf("Digite a população: ");
    scanf("%lu", &populacao1); // %lu para unsigned long

    printf("Digite a área: (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    //Entrada da carta 2 
    printf("Cadastro da Carta 2:\n");
    printf("\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2); 

    printf("Digite o codigo da carta (wx: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2); 

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n");
    printf("-----------------------------------------------------------------------------");
    printf("\n");

    //Dados da carta 1
    printf("=== INFORMAÇÕES DA CARTA 1 ===\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    float densidadep1 = (float)populacao1 / area1;
    printf("A Densidade Populacional é de: %.2f hab/km²\n", densidadep1);

    pib_per_capita1 = pib1 / populacao1;
    printf("PIB per Capita é de: %.2f reais\n", pib_per_capita1);

    // Cálculo do Super Poder para carta 1
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pib_per_capita1 + (1.0f / densidadep1);
    printf("Super Poder da Carta 1: %.2f\n\n", super_poder1);


    //Dados da carta 2
    printf("=== INFORMAÇÕES DA CARTA 2 ===\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    float densidadep2 = (float)populacao2 / area2;
    printf("A Densidade Populacional é de: %.2f hab/km²\n", densidadep2);

    pib_per_capita2 = pib2 / populacao2;
    printf("PIB per Capita é de: %.2f reais\n", pib_per_capita2);

    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pib_per_capita2 + (1.0f / densidadep2);
    printf("Super Poder da Carta 2: %.2f\n\n\n", super_poder2);

    // Mensagem explicativa para o usuário
    printf("=== RESULTADOS DAS COMPARAÇÕES ===\n\n");
    printf("Observação: Para cada atributo, o resultado 1 indica\n que a Carta 1 venceu,\n");
    printf("e o resultado 0 indica que a Carta 2 venceu.\n\n");

    // Comparações dos atributos
    printf("População: %d\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: %d\n", area1 > area2 ? 1 : 0);
    printf("PIB: %d\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2 ? 1 : 0);
    printf("PIB per Capita: %d\n", pib_per_capita1 > pib_per_capita2 ? 1 : 0);
    printf("Densidade Populacional: %d\n", densidadep1 < densidadep2 ? 1 : 0);  // menor vence
    printf("Super Poder: %d\n\n\n", super_poder1 > super_poder2 ? 1 : 0);

    return 0;



}
