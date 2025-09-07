#include <stdio.h>

int main (){
    int menu;
    char codigo[4];
    char estado[3];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

    char codigo2[4];
    char estado2[3];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    printf("SUPER TRUNFO, DEV: ALVARO TORRES\n ");
    printf("\n");
    printf("**************************CADASTRO DE CARTAS*****************************\n");
    printf("\n");

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
    densidadePopulacional = (float) populacao / area;
    pibPerCapita = (float) densidadePopulacional / pib;
    

    // segunda carta.

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
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) densidadePopulacional2 / pib2;

    


//Cartas cadastradas:

    printf("***********************CARTA CADASTRADA Número 1*********************\n");
    printf("Carta:%s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("%.2f\n", densidadePopulacional);
    printf("%.2f\n", pibPerCapita);
    printf("\n");

    printf("***********************CARTA CADASTRADA Número 2*********************\n");
    printf("Carta:%s\n", codigo2);
    printf("Cidade: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("%.2f\n", densidadePopulacional2);
    printf("%.2f\n", pibPerCapita2);
    printf("\n");

     // Comparação das cartas:

     printf("----------------------- MENU DE ATRIBUTOS --------------------------\n");
     printf("Escolha um atributo para mostrar o resultado:\n");
     printf("1: Tamanho da população\n");
     printf("2: tamanho da área\n");
     printf("3: tamanho do PIB\n");
     printf("4: Quantidade de pontos Turísticos\n");
     printf("5. Densidade Demográfica\n");
     scanf("%d", &menu);

     switch (menu)
        {
        case 1:
            if (populacao > populacao2)
            {
                printf("A população da cidade %s é maior, Carta 1 venceu!\n", estado);
            } else {
                printf("A população da cidade %s é maior, carta 2 venceu!\n", estado2);
            }
            break;
            
        case 2:
            if (area > area2)
            {
                printf("O tamanho da Área de %s é maior, a carta 1 venceu!\n", estado);
            } else if (area == area2) {
                printf("A área dos estados são iguais, EMPATE!!!\n");
            } else {
                printf("O tamanho da Área de %s é maior, carta 2 venceu!\n", estado2);
            }
            break;
            
        case 3: 
            if (pib > pib2)
            {
                printf("O PIB de %s é maior, a carta 1 venceu!\n", estado);
            } else if (pib == pib2) {
                printf("Os estados tem a mesma quantidade de PIB\n");
            } else {
                printf("O PIB de %s é maior, a carta 2 venceu!", estado2);
            }
            break;

        case 4:
            if (pontosTuristicos > pontosTuristicos2)
            {
                printf("%s tem mais pontos Turísticos do que %s\n", estado, estado2); 
            } else if (pontosTuristicos == pontosTuristicos2) {
                printf("Os dois estados tem a mesma quantidade de pontos Turísticos, EMPATE!!!\n");
            } else {
                printf("%s tem mais pontos Turísticos do que %s\n", estado2, estado); 
            }
            break;
        
        case 5:
            if ( densidadePopulacional < densidadePopulacional2) {
                printf("A %s tem uma densidade demográfica melhor do que %s, carta 1 venceu!!", estado, estado);
            } else if (densidadePopulacional == densidadePopulacional2) {
                printf("As cartas tem o mesmo atributo, EMPATE!!!");
            }   else {
                printf("A %s tem uma densidade demográfica melhor do que %s, carta 1 venceu!!", estado2, estado);
            }
            break;
            

            default:
                printf("### Opção inválida ###");
            break;
        }
     return 0;
}