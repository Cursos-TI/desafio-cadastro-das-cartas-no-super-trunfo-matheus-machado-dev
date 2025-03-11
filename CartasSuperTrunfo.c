#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Carta 1
    int carta;
    char estado[50];
    char codigo[20];
    char nomeCidade[100];
    unsigned int populacao;
    float area;
    double PIB, pibcapi;
    double densA = populacao/area;
    double densPibC = densA/pibcapi;
    int numerosTuristicos;
    float superPoder = populacao + area + PIB + numerosTuristicos + pibcapi + densA;

    //Carta 2
    int carta2;
    char estado2[50];
    char codigo2[20];
    char nomeCidade2[100];
    unsigned int populacao2;
    float area2;
    double PIB2, pibcapi2;
    double densA2 = populacao2/area2;
    double densPibC2 = densA2/pibcapi2;
    int numerosTuristicos2;
    float superPoder2 = populacao2 + area2 + PIB2 + numerosTuristicos2 + pibcapi2 + densA2;


    //Entrada de dados da Carta 1
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
    
     //Entrada de dados da Carta 2
     printf("Carta: \n");
     scanf("%d", &carta2);
     
     printf("Estado: \n");
     scanf("%s", estado2); 
     
     printf("Código: \n");
     scanf("%s", codigo2);
     
     printf("Nome da Cidade: \n");
     getchar(); // Capturar o '\n'
     fgets(nomeCidade2, sizeof(nomeCidade2), stdin); // fgets = ler uma linha completa, incluindo espaços
     
     printf("População: \n");
     scanf("%d", &populacao2);
     
     printf("Área (em km²): \n");
     scanf("%f", &area2);
     
     printf("PIB (em bilhões de reais): \n");
     scanf("%lf", &PIB2);
     
     printf("Números de Pontos Turísticos: \n");
     scanf("%d", &numerosTuristicos2);
     


    // saida de dados da carta 1
    printf("######## CARTA 1 ########\n");
    printf("\nInformações da Cidade:\n");
    printf("Carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Área: %.4f km²\n", area);
    printf("PIB: %.3lf bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", numerosTuristicos);
    printf("Densidade Populacional: %.4f hab/km²\n", (float)densA);
    printf("PIB per Capita: %.5f\n reais",(float)pibcapi);
    

    printf("\n");

    printf("######## CARTA 2 ########\n");
    printf("\nInformações da Cidade:\n");
    printf("Carta: %d\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Área: %.4f km²\n", area2);
    printf("PIB: %.3lf bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numerosTuristicos2);
    printf("Densidade Populacional: %.4f hab/km²\n", (float)densA2);
    printf("PIB per Capita: %.5f\n reais",(float)pibcapi2);

  
    printf("Comparação de Cartas: \n");
    if(populacao > populacao2){
        printf("População: Carta 1 venceu");
    }else{
        printf("População: Carta 2 venceu");
    }
    printf("\n");
    if(area > area2){
        printf("Área: Carta 1 venceu");
    } else{
        printf("Área: Carta 2 venceu");
    }
    printf("\n");
    if (PIB > PIB2)
    {       
        printf("PIB: Carta 1 venceu");
    } else{
        printf("PIB: Carta 2 venceu");
    }
    printf("\n");
    if(numerosTuristicos > numerosTuristicos2){
        printf("Pontos Turísticos: Carta 1 venceu");
    } else{
        printf("Pontos Turísticos: Carta 2 venceu");
    }
    printf("\n");
    if (densA < densA2)
    {
        printf("Densidade Populacional: Carta 1 venceu");
    }else{
        printf("Densidade Populacional: Carta 2 venceu");
    }
    printf("\n");
    if (pibcapi > pibcapi2)
    {
        printf("PIB per Capita: Carta 1 venceu");
    }else{
        printf("PIB per Capita: Carta 2 venceu");
    }
    printf("\n");
     if (superPoder > superPoder2)
     {
        printf("Super Poder: Carta 1 venceu");
     } else{
        printf("Super Poder: Carta 2 venceu");
     }
     
    
    
    
    
    

    return 0;




    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
