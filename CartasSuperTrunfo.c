#include <stdio.h>

int main(){

    //CARTA 1:
    char estado1[20];
    char codigo_da_carta1[6];
    char nome_da_cidade1[50];
    int populacao1;
    float area_em_km1;
    float pib1;
    int numero_de_pontos_turisticos1;

    //CARTA 2:
    char estado2[20];
    char codigo_da_carta2[6];
    char nome_da_cidade2[20];
    int populacao2;
    float area_em_km2;
    float pib2;
    int numero_de_pontos_turisticos2;

    //CARTA 1:
    printf("Vamos cadastrar a primeira carta!\n");

    printf("Qual a sigla do estado: ", estado1);
    fgets(estado1,20, stdin);

    printf("Qual o código: ", codigo_da_carta1);
    scanf("%s", &codigo_da_carta1);
    getchar();

    printf("Qual o nome da cidade: ", nome_da_cidade1);
    fgets(nome_da_cidade1, 50, stdin);

    printf("Qual é a populacão (sem pontos): ", populacao1);
    scanf("%d", &populacao1);

    printf("Qual a área em km²: ", area_em_km1);
    scanf("%f", &area_em_km1);

    printf("Qual o PIB: ", pib1);
    scanf("%f", &pib1);

    printf("Qual o número de Pontos Turísiticos: ", numero_de_pontos_turisticos1);
    scanf("%d", &numero_de_pontos_turisticos1);
    getchar();

    //CARTA 2:
    printf("\nVamos cadastrar a segunda carta!\n");

    printf("Qual a sigla do estado: ", estado2);
    fgets(estado2, 20, stdin);

    printf("Qual o código: ", codigo_da_carta2);
    scanf("%s", &codigo_da_carta2);
    getchar();

    printf("Qual o nome da cidade: ", nome_da_cidade2);
    fgets(nome_da_cidade2, 20, stdin);

    printf("Qual é a populacão (sem pontos): ", populacao2);
    scanf("%d", &populacao2);

    printf("Qual a área em km²: ", area_em_km2);
    scanf("%f", &area_em_km2);

    printf("Qual o PIB: ", pib2);
    scanf("%f", &pib2);

    printf("Qual o número de Pontos Turísiticos: ", numero_de_pontos_turisticos2);
    scanf("%d", &numero_de_pontos_turisticos2);
    getchar();

    //RESULTADO FINAL:
    printf("\nCarta 1:\n");
    printf("Estado:%s", estado1);
    printf("Código:%s\n", codigo_da_carta1);
    printf("Nome da Cidade:%s", nome_da_cidade1);
    printf("Populacão:%d\n", populacao1);
    printf("Área: %f\n", area_em_km1);
    printf("PIB:%f\n", pib1);
    printf("Número de Pontos Turísticos:%d\n", numero_de_pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado:%s", estado2);
    printf("Código:%s\n", codigo_da_carta2);
    printf("Nome da Cidade:%s", nome_da_cidade2);
    printf("Populacão:%d\n", populacao2);
    printf("Área: %f\n", area_em_km2);
    printf("PIB:%f\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", numero_de_pontos_turisticos2);


    return 0;
}
