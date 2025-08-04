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
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //Variaveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("\n");
    printf("\n");
    printf("\n~~~~~ Super Trunfo: Cidades ~~~~~\n\n");
    printf("\n");
    printf("\n");

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
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

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
    printf("----------------------------------------------------------------------------------------------------------------------------");
    printf("\n");

    //Dados da carta 1
    printf("=== INFORMAÇÕES DA CARTA 1 ===\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    float densidadep1 = populacao1 / area1;
    printf("A Densidade Populacional é de: %.2f hab/km²\n", densidadep1);

    float pibc1 = pib1 / populacao1;
    printf("PIB per Capita é de: %.2f reais\n", pibc1);

    printf("\n");

    //Dados da carta 2
    printf("=== INFORMAÇÕES DA CARTA 2 ===\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    float densidadep2 = populacao2 / area2;
    printf("A Densidade Populacional é de: %.2f hab/km²\n", densidadep2);

    float pibc2 = pib2 / populacao2; //pibc é o PIB per Capita
    printf("PIB per Capita é de: %.2f reais\n", pibc2);

    printf("\n"); //Tentando deixar menos feio
    printf("\n");



    return 0;



}
