#include <stdio.h>

typedef struct {
    char Estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("Por favor insira os dados da carta1 \n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &carta1.Estado);
    printf("Digite um Codigo (ex: A01): \n");
    scanf("%3s", carta1.codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta1.cidade);
    printf("Digite o numero da populacao: \n");
    scanf("%d", &carta1.populacao);
    printf("Digite a area por km²: \n");
    scanf("%f", &carta1.area);
    printf("Digite o Pib: \n");
    scanf("%f", &carta1.pib);
    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &carta1.pontosTuristicos);

    printf("Dados da carta1\n");
    printf("Estado: %c\n", carta1.Estado);
    printf("codigo: %s\n", carta1.codigo);
    printf("cidade: %s\n", carta1.cidade);
    printf("populacao: %d\n", carta1.populacao);
    printf("area: %f\n", carta1.area);
    printf("pib: %f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("Digite dados da carta2 \n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &carta2.Estado);
    printf("Digite um Codigo (ex: A01): \n");
    scanf("%3s", carta2.codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta2.cidade);
    printf("Digite o numero da populacao: \n");
    scanf("%d", &carta2.populacao);
    printf("Digite a area por km²: \n");
    scanf("%f", &carta2.area);
    printf("Digite o Pib: \n");
    scanf("%f", &carta2.pib);
    printf("Digite quantos pontos turisticos: \n");
    scanf("%d", &carta2.pontosTuristicos);

    printf("Dados da carta2\n");
    printf("Estado: %c\n", carta2.Estado);
    printf("codigo: %s\n", carta2.codigo);
    printf("cidade: %s\n", carta2.cidade);
    printf("populacao: %d\n", carta2.populacao);
    printf("area: %f\n", carta2.area);
    printf("pib: %f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);




    
return 0;
}
