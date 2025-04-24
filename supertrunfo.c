#include <stdio.h>

int main (){
    char codigo[4];
    char estado[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

    char codigo2[4];
    char estado2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    printf("SUPER TRUNFO, DEV: ALVARO TORRES\n ");
    printf("**************************CADASTRO DE CARTAS*****************************\n");

//Entradada de dados:

    //primeira carta.

    printf("Digite os Atributos da sua primeira carta:\n");
    printf("\n");
    printf("Digite o código da sua carta, EX: A22\n");
    scanf("%s", codigo);
    printf("Diga-me o seu estado escolhido, EX: PE\n");
    scanf("%s", estado);
    printf("Digite a quantidade de população:\n");
    scanf("%d", &populacao);
    printf("Digite o tamanho da área, EX: 200000\n");
    scanf("%f", &area);
    printf("Pois bem, me diga então o PIB, EX: 312.5\n");
    scanf("%f", &pib);
    printf("Quantidade de pontos turísticos, EX: 50\n");
    scanf("%d", &pontosTuristicos);

    //segunda carta.

    printf("Digite os Atributos da sua segunda carta:\n");
    printf("\n");
    printf("Digite o código da sua carta, EX: A22\n");
    scanf("%s", codigo2);
    printf("Diga-me o seu estado escolhido, EX: PE\n");
    scanf("%s", estado2);
    printf("Digite a quantidade de população:\n");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da área, EX: 200000\n");
    scanf("%f", &area2);
    printf("Pois bem, me diga então o PIB, EX: 312.5\n");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos, EX: 50\n");
    scanf("%d", &pontosTuristicos2);

//Carta cadastrada:

    printf("***********************CARTA CADASTRADA Número 1*********************\n");
    printf("Carta:%s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    printf("***********************CARTA CADASTRADA Número 1*********************\n");
    printf("Carta:%s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);


    return 0;