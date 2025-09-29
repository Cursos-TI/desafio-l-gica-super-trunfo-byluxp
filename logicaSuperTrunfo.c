#include <stdio.h>
#include <string.h>


int main () {

    printf("Seja bem-vindo ao Super Trunfo. Digite as informações solicitadas.\n");

    // Variáveis da CARTA 01
    char estado_1 [3];
    char codigo_1 [5];
    char cidade_1 [30]; // cidade = nome da cidade
    unsigned long int pop_1; // pop = população
    float area_1; // área da cidade em km
    double pib_1; // valor do pib da cidade.  o exercício pede em float mas por ser um valor alto, é melhor o uso do double
    int pontos_1; // pontos turísticos
    float densidade_1; // densidade populacional
    double pib_per_capita_1; // pib per capita
    unsigned long int super_1; // super poder da carta 

    // Variáveis da CARTA 02
    char estado_2[3];
    char codigo_2[5];
    char cidade_2[30];
    unsigned long int pop_2;
    float area_2;
    double pib_2;
    int pontos_2;
    float densidade_2;
    double pib_per_capita_2;
    unsigned long int super_2; 

    // Variáveis de comparação
    int comparacao_populacao;
    float comparacao_area;
    double comparacao_pib;
    int comparacao_pontos;
    float comparacao_densidade;
    double comparacao_pib_per_capita;
    unsigned long int comparacao_super;
    


    // O jogo será bem interativo, incentivando a pensar ao preencher as informações. 

        printf("\n--- CARTA 1 ---\n");

    printf("Digite o nome da cidade: \n");
    fgets(cidade_1, sizeof(cidade_1), stdin);
    cidade_1[strcspn(cidade_1, "\n")] = '\0'; // remove o \n

    printf("Digite o nome do estado em formato de sigla: \n");
    scanf("%s", estado_1);

    printf("Agora, vamos aplicar um código à carta sendo a sigla do estado e o número da carta (Ex: SP01): \n");
    scanf("%s", codigo_1);

    printf("Adicione a população da cidade: \n");
    scanf("%lu", &pop_1);

    printf("Adicione a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area_1);


    printf("Adicione o valor do PIB da cidade, em reais: \n");
    scanf("%lf", &pib_1);
    pib_1 = pib_1 * 1e9; // convertendo para bilhões de reais

    printf("Por fim, vamos adicionar o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_1);

    densidade_1 = pop_1 / area_1;
    pib_per_capita_1 = pib_1 / pop_1;

    super_1 = (float) (pop_1 + area_1 + pib_1 + pontos_1 + pib_per_capita_1 ) + (1.0f /densidade_1);// calculo do super poder da carta 01

    printf("\nAgora, vamos adicionar os dados da CARTA 02\n");

        printf("\n--- CARTA 2 ---\n");

    // aqui precisa limpar o ENTER que ficou do último scanf antes do fgets
    getchar();  

    printf("Digite o nome da cidade: \n");
    fgets(cidade_2, sizeof(cidade_2), stdin);
    cidade_2[strcspn(cidade_2, "\n")] = '\0';

    printf("Digite o nome do estado em formato de sigla: \n");
    scanf("%2s", estado_2);

    printf("Agora, vamos aplicar um código à carta (Ex: RJ02): \n");
    scanf("%4s", codigo_2);

    printf("Adicione a população da cidade: \n");
    scanf("%lu", &pop_2);
    
    printf("Adicione a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area_2);

    printf("Adicione o valor do PIB da cidade, em reais: \n");
    scanf("%lf", &pib_2);
    pib_2 = pib_2 * 1e9; // convertendo para bilhões de reais

    printf("Por fim, vamos adicionar o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_2);

    densidade_2 = pop_2 / area_2;
    pib_per_capita_2 = pib_2 / pop_2;

    super_2 = (float)(pop_2 + area_2 + pib_2 + pontos_2 + pib_per_capita_2) + (1.0f / densidade_2);
     // calculo super poder da carta 02

    printf("\nEssas foram as informações que você adicionou: \n");
    printf("\nCARTA 01\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População:  %d\n", pop_1);
    printf("Área:  %.2f km²\n", area_1);
    printf("PIB:  %.2f bilhões de reais\n", pib_1);
    printf("Número de pontos:  %d\n", pontos_1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);

    printf("\nCARTA 02\n");
    printf("Cidade: %s\n", cidade_2);
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("População: %d\n", pop_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Pontos turísticos: %d\n", pontos_2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);

     printf("\nAgora vamos comparar as informações das cartas.\n"); 
    // Realizar as operações lógicas

    comparacao_populacao = pop_1 > pop_2;
    comparacao_area = area_1 > area_2;
    comparacao_pib = pib_1 > pib_2;
    comparacao_pontos = pontos_1 > pontos_2;
    comparacao_densidade = densidade_1 < densidade_2; // menor densidade vence
    comparacao_pib_per_capita = pib_per_capita_1 > pib_per_capita_2;
    comparacao_super = super_1 > super_2;
   
    // Irei realizar com a função if else pois tenho mais familiaridade com ela

    // Comparação da população
    printf("\n--População--\n"); 
    printf("Carta 1: %d habitantes \n", pop_1);
    printf("Carta 2: %d habitantes \n", pop_2);
    if (pop_1 > pop_2) {
        printf("A carta 1 venceu");
    } else if (pop_1 < pop_2) {
        printf("A carta 2 venceu"); 
    }   printf("(%d)\n", comparacao_populacao);

    // Comparação da área
    printf("\n--Área--\n");
    printf("Carta 1: %.2f km² \n", area_1);
    printf("Carta 2: %.2f km² \n", area_2);
    if (area_1 > area_2) {
        printf("A carta 1 venceu");
    } else if (area_1 < area_2) {
        printf("A carta 2 venceu");
    } printf("(%.0f)\n", comparacao_area);

    // Comparação de PIB
    printf("\n--PIB--\n");
    printf("Carta 1: %.2f bilhões de reais \n", pib_1);
    printf("Carta 2: %.2f bilhões de reais \n", pib_2);
    if (pib_1 > pib_2) {
        printf("A carta 1 venceu");
    } else if (pib_1 < pib_2) {
        printf("A carta 2 venceu");
    } printf("(%.0f)\n", comparacao_pib);

    // Comparação de pontos turísticos
    printf("\n--Pontos turísticos--\n");
    printf("Carta 1: %d\n", pontos_1);
    printf("Carta 2: %d\n", pontos_2);
    if (pontos_1 > pontos_2) {
        printf("A carta 1 venceu");
    } else if (pontos_1 < pontos_2) {
        printf("A carta 2 venceu"); 
    } printf("(%d)\n", comparacao_pontos);

    // Comparação da densidade populacional
    printf("\n--Densidade--\n");
    printf("Carta 1: %.2f habitantes por km²\n", densidade_1);
    printf("Carta 2: %.2f habitantes por km²\n", densidade_2);
    if (densidade_1 < densidade_2) {
        printf("A carta 1 venceu"); 
    } else if (densidade_1 > densidade_2) {
        printf("A carta 2 venceu");
    } printf("(%.0f)\n", comparacao_densidade);

    // Comparação PIB per capita
    printf("\n--PIB per capita--\n");
    printf("Carta 1: %.2f reais\n", pib_per_capita_1);
    printf("Carta 2: %.2f reais\n", pib_per_capita_2);
    if (pib_per_capita_1 > pib_per_capita_2) {
        printf("A carta 1 venceu");
    } else if (pib_per_capita_1 < pib_per_capita_2) {
        printf("A carta 2 venceu");
    } printf("(%.0f)\n", comparacao_pib_per_capita);

    printf("\n E a vencedora é: \n");

    // Comparação do super poder
    printf("\n--Super poder--\n");    
    if (super_1 > super_2) {
        printf("A carta 1 venceu");
    } else if (super_1 < super_2) {
        printf("A carta 2 venceu");
    } printf("(%d)\n", comparacao_super);

    // Fim do jogo. Recomendo um dorflex pra quem ler até aqui.
    printf("\nObrigado por jogar Super Trunfo! Nos vemos em breve.\n");

    return 0;

}