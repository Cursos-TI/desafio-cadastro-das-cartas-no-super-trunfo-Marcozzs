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
    float densidade1;

    //CARTA 2:
    char estado2[20];
    char codigo_da_carta2[6];
    char nome_da_cidade2[20];
    int populacao2;
    float area_em_km2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade2;

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

     // Calcular densidade
     densidade1 = populacao1 / area_em_km1;
     densidade2 = populacao2 / area_em_km2;
 
     int opcao;
     printf("\nEscolha um atributo para comparar:\n");
     printf("1 - População\n");
     printf("2 - Área\n");
     printf("3 - PIB\n");
     printf("4 - Número de Pontos Turísticos\n");
     printf("5 - Densidade Demográfica\n");
     printf("Digite a opção: ");
     scanf("%d", &opcao);
 
     printf("\nComparando cidades:\n");
     printf("%s x %s\n", nome_da_cidade1, nome_da_cidade2);
 
     switch(opcao) {
         case 1:
             printf("População: %d x %d\n", populacao1, populacao2);
             if (populacao1 > populacao2)
                 printf("Vitória: %s\n", nome_da_cidade1);
             else if (populacao2 > populacao1)
                 printf("Vitória: %s\n", nome_da_cidade2);
             else
                 printf("Empate!\n");
             break;
         case 2:
             printf("Área: %.2f x %.2f\n", area_em_km1, area_em_km2);
             if (area_em_km1 > area_em_km2)
                 printf("Vitória: %s\n", nome_da_cidade1);
             else if (area_em_km2 > area_em_km1)
                 printf("Vitória: %s\n", nome_da_cidade2);
             else
                 printf("Empate!\n");
             break;
         case 3:
             printf("PIB: %.2f x %.2f\n", pib1, pib2);
             if (pib1 > pib2)
                 printf("Vitória: %s\n", nome_da_cidade1);
             else if (pib2 > pib1)
                 printf("Vitória: %s\n", nome_da_cidade2);
             else
                 printf("Empate!\n");
             break;
         case 4:
             printf("Pontos Turísticos: %d x %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);
             if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
                 printf("Vitória: %s\n", nome_da_cidade1);
             else if (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1)
                 printf("Vitória: %s\n", nome_da_cidade2);
             else
                 printf("Empate!\n");
             break;
         case 5:
             printf("Densidade Demográfica: %.2f x %.2f\n", densidade1, densidade2);
             if (densidade1 < densidade2)
                 printf("Vitória: %s (menor densidade)\n", nome_da_cidade1);
             else if (densidade2 < densidade1)
                 printf("Vitória: %s (menor densidade)\n", nome_da_cidade2);
             else
                 printf("Empate!\n");
             break;
         default:
             printf("Opção inválida!\n");
     }
 
     return 0;
 }
