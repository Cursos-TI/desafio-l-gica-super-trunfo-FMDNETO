#include<stdio.h>

//CRIANDO O PROGRAMA PRINCIPAL

int main()
    {
    //DECLARANDO VARIAVEIS
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
    printf("------------------------------------\n");
    printf("----VERIFICANDO A CARTA VENCEDORA----\n");
    printf("------------------------------------\n");
    //DESAFIO INICIANTE - LÓGICA EM C
    //POPULACAO
    if (populacao1 > populacao2) {
        printf("A primeira carta vence na Populacao!\n");
    } else if (populacao2 > populacao1) {
        printf("A segunda carta vence na Populacao!\n");
    } else {
        printf("As cartas empatam na Populacao!\n");
    }
    //AREA
    if (area1 > area2) {
        printf("A primeira carta vence na Area!\n");
    } else if (area2 > area1) {
        printf("A segunda carta vence na Area!\n");
    } else {
        printf("As cartas empatam na Area!\n");
    }
    //PIB
    if (pib1 > pib2) {
        printf("A primeira carta vence no PIB!\n");
    } else if (pib2 > pib1) {
        printf("A segunda carta vence no PIB!\n");
    } else {
        printf("As cartas empatam no PIB!\n");
    }
    //PONTOS TURISTICOS
    if (pturismo1 > pturismo2) {
        printf("A primeira carta vence nos Pontos Turisticos!\n");
    } else if (pturismo2 > pturismo1) {
        printf("A segunda carta vence nos Pontos Turisticos!\n");
    } else {
        printf("As cartas empatam nos Pontos Turisticos!\n");
    }
    //DENSIDADE POPULACIONAL
    if (denspop1 > denspop2) {
        printf("A primeira carta vence na Densidade Populacional!\n");
    } else if (denspop2 > denspop1) {
        printf("A segunda carta vence na Densidade Populacional!\n");
    } else {
        printf("As cartas empatam na Densidade Populacional!\n");
    }
    //PIB PER CAPITA
    if (pibpercapita1 > pibpercapita2) {
        printf("A primeira carta vence no PIB per capita!\n");
    } else if (pibpercapita2 > pibpercapita1) {
        printf("A segunda carta vence no PIB per capita!\n");
    } else {
        printf("As cartas empatam no PIB per capita!\n");
    }
    //SUPER PODER
    if (superpoder1 > superpoder2) {
        printf("A primeira carta vence no Super Poder!\n");
    } else if (superpoder2 > superpoder1) {
        printf("A segunda carta vence no Super Poder!\n");
    } else {
        printf("As cartas empatam no Super Poder!\n");
    }
    //FIM DO DESAFIO INICIANTE
    return 0;
    //FIM DO PROGRAMA
    }