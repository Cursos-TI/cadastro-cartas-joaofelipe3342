#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Variaveis
    int populacao1,populacao2, n_turisticos1,n_turisticos2;
    float area1,area2, pib1, pib2;
    char estado1, estado2, codigo1[10],codigo2[10], nome1[100], nome2[100];

    //Apresentação do jogo
    printf("Super Trunfo de Países\n\n");
    printf("Este software cadastra 2 cartas para um jogo de super trunfo de cidades.\n\n");

    //Carta 1
    printf("Cadastro da Carta 1:\n\n");

    printf("Digite abaixo a letra que reprensenta o estado, depois pressione enter no teclado.\n");
    printf("Exemplo de letra: A, B, C...\n");
    scanf("%c", &estado1);
    getchar();

    printf("Digite abaixo o codigo da carta, a letra do estado seguida de um número de 01 a 04, depois pressione enter no teclado.\n");
    printf("Exemplo de codigo: A01, B03...\n");
    scanf("%[^\n]", codigo1);
    getchar();


    printf("Digite abaixo o nome da cidade, depois pressione enter no teclado.\n");
    printf("Exemplo de cidade: Rio De Janeiro, Sao Paulo...\n");
    scanf("%[^\n]", nome1);
    getchar();

    printf("Digite abaixo a quantidade de população da cidade, depois pressione enter no teclado.\n");
    printf("Exemplo de quantidade: 12325000, 6748000...\n");
    scanf("%d", &populacao1);

    printf("Digite abaixo a area da cidade em quilometros quadrados, depois pressione enter no teclado.\n");
    printf("Exemplo de area: 1521.11, 1200.25...\n");
    scanf("%f", &area1);

    printf("Digite abaixo o PIB da cidade em bilhoes de reais, depois pressione enter no teclado.\n");
    printf("Exemplo de PIB: 699.28, 300.50...\n");
    scanf("%f", &pib1);

    printf("Digite abaixo a quantidade de pontos turisticos da cidade, depois pressione enter no teclado.\n");
    printf("Exemplo de quantidade: 50, 30, 20 ...\n");
    scanf("%d", &n_turisticos1);

    //Carta 2
    printf("\nCadastro da Carta 2:\n\n");

    getchar();
    printf("Digite abaixo a letra que reprensenta o estado, depois pressione enter no teclado.\n");
    printf("Exemplo de letra: A, B, C...\n");
    scanf("%c", &estado2);
    getchar();

    printf("Digite abaixo o codigo da carta, a letra do estado seguida de um número de 01 a 04, depois pressione enter no teclado.\n");
    printf("Exemplo de codigo: A01, B03...\n");
    scanf("%[^\n]", codigo2);
    getchar();

    printf("Digite abaixo o nome da cidade, depois pressione enter no teclado.\n");
    printf("Exemplo de cidade: Rio De Janeiro, Sao Paulo...\n");
    scanf("%[^\n]", nome2);
    getchar();

    printf("Digite abaixo a quantidade de população da cidade, depois pressione enter no teclado.\n");
    printf("Exemplo de quantidade: 12325000, 6748000...\n");
    scanf("%d", &populacao2);

    printf("Digite abaixo a area da cidade em quilometros quadrados, depois pressione enter no teclado.\n");
    printf("Exemplo de area: 1521.11, 1200.25...\n");
    scanf("%f", &area2);

    printf("Digite abaixo o PIB da cidade em bilhoes de reais, depois pressione enter no teclado.\n");
    printf("Exemplo de PIB: 699.28, 300.50...\n");
    scanf("%f", &pib2);

    printf("Digite abaixo a quantidade de pontos turisticos da cidade, depois pressione enter no teclado.\n");
    printf("Exemplo de quantidade: 50, 30, 20 ...\n");
    scanf("%d", &n_turisticos2);

    // Exibição das cartas
    printf("\nExibição das Cartas:\n\n");

    printf("Carta1:\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", n_turisticos1);

    printf("Carta2:\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", n_turisticos2);


return 0;
} 
