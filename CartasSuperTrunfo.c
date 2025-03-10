#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int carta;
    char estado[50];
    char codigo[20];
    char nomeCidade[100];
    int populacao;
    float area;
    double PIB;
    int numerosTuristicos;

    //Entrada de dados 
    printf("Carta: \n");
    scanf("%d", &carta);

    printf("Estado: \n");
    scanf("%s", estado); 

    printf("Código: \n");
    scanf("%s", codigo);

    printf("Nome da Cidade: \n");
    getchar(); // Capturar o '\n'
    fgets(nomeCidade, sizeof(nomeCidade), stdin); // fgets = ler uma linha completa, incluindo espaços

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área (em km²): \n");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais): \n");
    scanf("%lf", &PIB);

    printf("Números de Pontos Turísticos: \n");
    scanf("%d", &numerosTuristicos);


    // saida de dados
    printf("\nInformações da Cidade:\n");
    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Área: %.4f km²\n", area);
    printf("PIB: %.3lf bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", numerosTuristicos);
    printf("Densidade Populacional: %.4f hab/km²\n", (float)populacao/area);
    printf("PIB per Capita: %.5f\n reais",(float)PIB/populacao);

    return 0;




    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
