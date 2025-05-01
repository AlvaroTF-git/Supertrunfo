#include <stdio.h>

int main (){
    int menu1, menu2;
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
     printf("Escolha um atributo diferente para comparar o resultado da primeira rodada:\n");
     printf("1: Tamanho da população\n");
     printf("2: tamanho da área\n");
     printf("3: tamanho do PIB\n");
     printf("4: Quantidade de pontos Turísticos\n");
     printf("5. Densidade Demográfica\n");
     int resultado_carta1;
     scanf("%d", &menu1);


    /* 
    Resultado = 1 = Vitória
    Resultado = 2 = Derrota
    Resultado = 0 = Empate
    */
    
        switch (menu1)
        {
        case 1:        
            if(populacao == populacao2) {
                int resultado_carta1 = 0;
            } else if (populacao > populacao2)
            {
                resultado_carta1 = 1;
            } else if (populacao < populacao2) {
                resultado_carta1 = 2;
            } else {
                printf("resultado inválido!");
            }
            break;
            
        case 2:
            if(area == area2) {
                int resultado_carta1 = 0;
            } else if (area == area2)
            {
                resultado_carta1 = 1;
            } else if (populacao < populacao2) {
                resultado_carta1 = 2;
            } else {
                printf("resultado inválido!");
            }
            break;
            
            
        case 3: 
            if(pib > pib2) {
                int resultado_carta1 = 1;
            } else if (pib == pib2)
            {
                resultado_carta1 = 0;
            } else if (pib < pib2) {
                resultado_carta1 = 2;
            } else {
                printf("resultado inválido!");
            }
            break;

        case 4: 
            if(pontosTuristicos > pontosTuristicos2) {
                int resultado = 1;
            } else if (pontosTuristicos == pontosTuristicos2)
            {
                resultado_carta1 = 0;
            } else if (pontosTuristicos < pontosTuristicos2) {
                resultado_carta1 = 2;
            } else {
                printf("resultado inválido!");
            }
            break;
        
        case 5: 
            if(densidadePopulacional < densidadePopulacional2) {
                int resultado_carta1 = 1;
            } else if (densidadePopulacional == densidadePopulacional2)
            {
                resultado_carta1 = 0;
            } else if (densidadePopulacional > densidadePopulacional2) {
                resultado_carta1 = 2;
            } else {
                printf("resultado inválido!");
            }
            break;
            

            default:
                printf("### Opção inválida ###");
            break;
        }


    printf("----------------------- MENU DE ATRIBUTOS --------------------------\n");
    printf("Escolha um atributo diferente para comparar o resultado da segunda rodada:\n");
    printf("1: Tamanho da população\n");
    printf("2: tamanho da área\n");
    printf("3: tamanho do PIB\n");
    printf("4: Quantidade de pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    int resultado_carta2;
    scanf("%d", &menu2);

    switch (menu2)
    {
        case 1:        
        if(populacao == populacao2) {
            int resultado_carta2 = 0;
        } else if (populacao > populacao2)
        {
            resultado_carta2 = 1;
        } else if (populacao < populacao2) {
            resultado_carta2 = 2;
        } else {
            printf("resultado inválido!");
        }
        break;

    break;

    case 2:
    if(area == area2) {
        int resultado_carta2 = 0;
    } else if (area == area2)
    {
        resultado_carta2 = 1;
    } else if (populacao < populacao2) {
        resultado_carta2 = 2;
    } else {
        printf("resultado inválido!");
    }
    break;
        
    case 3:
    if(pib > pib2) {
        int resultado_carta2 = 1;
    } else if (pib == pib2)
    {
        resultado_carta2 = 0;
    } else if (pib < pib2) {
        resultado_carta2 = 2;
    } else {
        printf("resultado inválido!");
    }
    break;

    case 4: 
    if(pontosTuristicos > pontosTuristicos2) {
        int resultado_carta2 = 1;
    } else if (pontosTuristicos == pontosTuristicos2)
    {
        resultado_carta2 = 0;
    } else if (pontosTuristicos < pontosTuristicos2) {
        resultado_carta2 = 2;
    } else {
        printf("resultado inválido!");
    }
    break;

    case 5:
    if(densidadePopulacional < densidadePopulacional2) {
        int resultado_carta2 = 1;
    } else if (densidadePopulacional == densidadePopulacional2)
    {
        resultado_carta2 = 0;
    } else if (densidadePopulacional > densidadePopulacional2) {
        resultado_carta2 = 2;
    } else {
        printf("resultado inválido!");
    }
    break;

    default:
        printf("Opção inválida!");
        break;
    }

    printf("--------------- Resultado da primeira rodada ----------------- \n");

    if (resultado_carta1 = 1) {
        printf("O vencedor da primeira rodada foi a vitória da carta 1, parabéns!\n");
    } else if (resultado_carta1 == 0)  {
        printf("O resultado da primeira rodada é um empate\n");
    } else if (resultado_carta1 == 2) {
        printf("O resultado da primeira rodada foi a vitória da carta 2, parabéns!\n");
    }
    
    
    
    printf("--------------- Resultado da segunda rodada ----------------- \n");

    if (resultado_carta2 = 1) {
        printf("O vencedor da primeira rodada foi a vitória da carta 1, parabéns!\n");
    } else if (resultado_carta2 == 0)  {
        printf("O resultado da primeira rodada é um empate\n");
    } else if (resultado_carta2 == 2) {
        printf("O resultado da primeira rodada foi a vitória da carta 2, parabéns!\n");
    }
    printf ("### Resultado da partida ###\n");

    if (resultado_carta1 && resultado_carta2 == 1)
    {
        printf("Parabéns ao primeiro jogador, ele ganhou os dois rounds!\n");
    } else if (resultado_carta1 != resultado_carta2) {
        printf("O jogo está empatado!\n");
    } else ("Parabéns ao segundo jogador, ele ganhou os dois rounds!\n");
    
    
    
    
            
    
     return 0;

}

   