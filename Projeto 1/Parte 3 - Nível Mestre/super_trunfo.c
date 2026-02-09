#include <stdio.h>

int main () {

    //Variaveis
    unsigned long int populacao1,populacao2;
    int n_turisticos1,n_turisticos2;
    float area1,area2, pib1, pib2, densidade1, densidade2, pib_capita1,pib_capita2, inverso_densidade1, inverso_densidade2,super1,super2;
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

    densidade1 = populacao1 / area1;
    pib_capita1 = pib1 / populacao1;
    inverso_densidade1 = 1 / densidade1;
    super1 = populacao1 + n_turisticos1 + area1 + pib1 + pib_capita1 + inverso_densidade1;

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

    densidade2 = populacao2 / area2;
    pib_capita2 = pib2 / populacao2;
    inverso_densidade2 = 1 / densidade2;
    super2 = populacao2 + n_turisticos2 + area2 + pib2 + pib_capita2 + inverso_densidade2;

    // Exibição das cartas
    printf("\nExibição das Cartas:\n\n");

    printf("Carta1:\n");
    printf("Estado: %c\n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", n_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pib_capita1);

    printf("Carta2:\n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", n_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per Capita: %.2f reais\n\n", pib_capita2);


    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n",populacao1>populacao2);
    printf("Área: Carta 1 venceu (%d)\n",area1>area2);
    printf("PIB: Carta 1 venceu (%d)\n",pib1>pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", n_turisticos1>n_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n",densidade1<densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n",pib_capita1>pib_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n",super1<super2);

    return 0;
}
