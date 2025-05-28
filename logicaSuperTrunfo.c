#include<stdio.h>

//CRIANDO O PROGRAMA PRINCIPAL

int main()
    {
    //DECLARANDO VARIAVEIS
    int opcao; //VARIAVEL PARA ESCOLHER A OPÇÃO DE VERIFICAR A CARTA VENCEDORA
    char estado1[20], estado2[20], codigocarta1[20], codigocarta2[20], nomecidade1[20], nomecidade2[20];
    unsigned long int populacao1, populacao2; //POPULAÇÃO COMO UNSIGNED LONG INT - DESAFIO MESTRE
    int pturismo1, pturismo2; //MODIFICAÇÃO FEITA NO DESAFIO MESTRE
    float area1, area2, pib1,pib2;
    float denspop1, denspop2; //DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    float pibpercapita1, pibpercapita2; // PIB PER CAPITA - DESAFIO AVENTUREIRO
    float superpoder1, superpoder2; //SUPER PODER - DESAFIO MESTRE
    
    //INICIALIZANDO VARIAVEIS DA PRIMEIRA CARTA
    printf("Digite o nome do estado da primeira carta: ");
    scanf("%s", estado1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nomecidade1);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigocarta1);
    printf("Digite a populacao da cidade: ");
    scanf("%li", &populacao1);
    printf("Digite a area da cidade: ");
    scanf("%f", &area1);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de Pontos Turisticos da cidade: ");
    scanf("%d", &pturismo1);
    denspop1 = populacao1 / area1; //CÁLCULO DA DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    pibpercapita1 = pib1 / (float)populacao1; //CÁLCULO DO PIB PER CAPITA - DESAFIO AVENTUREIRO

    //INICIALIZANDO VARIAVEIS DA SEGUNDA CARTA
    printf("Digite o nome do estado da segunda carta: ");
    scanf("%s", estado2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", nomecidade2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigocarta2);
    printf("Digite a populacao da cidade: ");
    scanf("%li", &populacao2);
    printf("Digite a area da cidade: ");
    scanf("%f", &area2);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos Turisticos da cidade: ");
    scanf("%d", &pturismo2);
    denspop2 = populacao2 / area2; //CÁLCULO DA DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    pibpercapita2 = pib2 / (float)populacao2; //CÁLCULO DO PIB PER CAPITA - DESAFIO AVENTUREIRO

    //DESAFIO MESTRE - CALCULO DO SUPER PODER
    superpoder1 = (populacao1+area1+pturismo1+pibpercapita1+(1/denspop1));
    superpoder2 = (populacao2+area2+pturismo2+pibpercapita2+(1/denspop2));
    
    //EXIBINDO O RESULTADO DA PRIMEIRA CARTA
    printf("-------------------------\n");
    printf("------PRIMEIRA CARTA-----\n");
    printf("-------------------------\n");
    printf("A primeira carta é  :\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Codigo: %s\n", codigocarta1);
    printf("Populacao: %li\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Pib: R$ %.2f BILHÕES\n", pib1);
    printf("Pontos Turisticos: %d\n", pturismo1);
    printf("Densidade Populacional: %.2f\n", denspop1); //EXIBINDO A DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    printf("Pib per capita: R$ %.2f\n", pibpercapita1); //EXIBINDO O PIB PER CAPITA - DESAFIO AVENTUREIRO
        
    //EXIBINDO O RESULTADO DA SEGUNDA CARTA
    printf("-------------------------\n");
    printf("------SEGUNDA CARTA------\n");
    printf("-------------------------\n");
    printf("A segunda carta é  :\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Populacao: %li\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Pib: R$ %.2f BILHÕES\n", pib2);
    printf("Pontos Turisticos: %d\n", pturismo2);
    printf("Densidade Populacional: %.2f\n", denspop2); //EXIBINDO A DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    printf("Pib per capita: R$ %.2f\n", pibpercapita2); //EXIBINDO O PIB PER CAPITA - DESAFIO AVENTUREIRO

    //DESAFIO MESTRE - VERIFICANDO A CARTA VENCEDORA
    printf("-------------------------------------\n");
    printf("----VERIFICANDO A CARTA VENCEDORA----\n");
    printf("-------------------------------------\n");
    printf("DIGITE A OPCAO PARA JOGAR:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &opcao);

    //VERIFICANDO A OPÇÃO ESCOLHIDA
    switch(opcao) {
        case 1:
            printf("Você escolheu Populacao!\n");
            break;
        case 2:
            printf("Você escolheu Area!\n");
            break;
        case 3:
            printf("Você escolheu PIB!\n");
            break;
        case 4:
            printf("Você escolheu Pontos Turisticos!\n");
            break;
        case 5:
            printf("Você escolheu Densidade Populacional!\n");
            break;
        case 6:
            printf("Você escolheu PIB per capita!\n");
            break;
        case 7:
            printf("Você escolheu Super Poder!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            return 1; // Encerrar o programa se a opção for inválida
    }
    //EXIBINDO A CARTA VENCEDORA
    printf("A carta vencedora é:\n");
    switch(opcao) {
        case 1:
            (area1>area2) ? printf("A primeira carta vence na Populacao!\nPopulação da carta %s: %li vs População da carta %s: %li", estado1, populacao1, estado2, populacao2) :
            (populacao2 > populacao1 ? printf("A segunda carta vence na Populacao!\nPopulação da carta %s: %li vs População da carta %s: %li", estado2, populacao2, estado1, populacao1) :
            printf("As cartas empatam na Populacao!\n"));
            break;
        case 2:
            (area1>area2) ? printf("A primeira carta vence na Area!\nArea da carta %s: %.2f vs Area da carta %s: %.2f", estado1, area1, estado2, area2) :
            (area2 > area1 ? printf("A segunda carta vence na Area!\nArea da carta %s: %.2f vs Area da carta %s: %.2f", estado2, area2, estado1, area1) :
            printf("As cartas empatam na Area!\n"));
            break;
        case 3:
            (pib1>pib2) ? printf("A primeira carta vence no PIB!\nPIB da carta %s: R$ %.2f BILHÕES vs PIB da carta %s: R$ %.2f BILHÕES", estado1, pib1, estado2, pib2) :
            (pib2 > pib1 ? printf("A segunda carta vence no PIB!\nPIB da carta %s: R$ %.2f BILHÕES vs PIB da carta %s: R$ %.2f BILHÕES", estado2, pib2, estado1, pib1) :
            printf("As cartas empatam no PIB!\n"));
            break;
        case 4:
            (pturismo1>pturismo2) ? printf("A primeira carta vence nos Pontos Turisticos!\nPontos Turisticos da carta %s: %d vs Pontos Turisticos da carta %s: %d", estado1, pturismo1, estado2, pturismo2) :
            (pturismo2 > pturismo1 ? printf("A segunda carta vence nos Pontos Turisticos!\nPontos Turisticos da carta %s: %d vs Pontos Turisticos da carta %s: %d", estado2, pturismo2, estado1, pturismo1) :
            printf("As cartas empatam nos Pontos Turisticos!\n"));
            break;
        case 5:
            (denspop1<denspop2) ? printf("A primeira carta vence na Densidade Populacional!\nDensidade Populacional da carta %s: %.2f vs Densidade Populacional da carta %s: %.2f", estado1, denspop1, estado2, denspop2) :
            (denspop2 < denspop1 ? printf("A segunda carta vence na Densidade Populacional!\nDensidade Populacional da carta %s: %.2f vs Densidade Populacional da carta %s: %.2f", estado2, denspop2, estado1, denspop1) :
            printf("As cartas empatam na Densidade Populacional!\n"));
            break;
        case 6:
            (pibpercapita1>pibpercapita2) ? printf("A primeira carta vence no PIB per capita!\nPIB per capita da carta %s: R$ %.2f vs PIB per capita da carta %s: R$ %.2f", estado1, pibpercapita1, estado2, pibpercapita2) :
            (pibpercapita2 > pibpercapita1 ? printf("A segunda carta vence no PIB per capita!\nPIB per capita da carta %s: R$ %.2f vs PIB per capita da carta %s: R$ %.2f", estado2, pibpercapita2, estado1, pibpercapita1) :
            printf("As cartas empatam no PIB per capita!\n"));
            break;
        case 7:
            (superpoder1>superpoder2) ? printf("A primeira carta vence no Super Poder!\nSuper Poder da carta %s: %.2f vs Super Poder da carta %s: %.2f", estado1, superpoder1, estado2, superpoder2) :
            (superpoder2 > superpoder1 ? printf("A segunda carta vence no Super Poder!\nSuper Poder da carta %s: %.2f vs Super Poder da carta %s: %.2f", estado2, superpoder2, estado1, superpoder1) :
            printf("As cartas empatam no Super Poder!\n"));
            break;
        default:
            printf("Opção inválida! Nenhuma carta vence.\n");
            break;

    }
}
    //FIM DO DESAFIO AVENTUREIRO
