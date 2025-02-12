#include <stdio.h>

int main() {
    printf("Super Trunfo\n");

    int codigoC, pontosT, populacao;
    float area, pib;
    char nome [50];
    
    printf ("Digite o nome da cidade:\n");
    scanf ("%s", &nome);
    printf ("Digite o codigo da cidade:\n");
    scanf ("%d", &codigoC);
    printf("Digite o numero de pontos turísticos da cidade:\n");
    scanf("%d", &pontosT);
    printf("Digite a area total da cidade:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Cidade: %s\nCódigo: %d \n",nome, codigoC);
        printf("Os atributos desta cidade:\n");
    printf("Pontos Turisticos: %d\nPopulação Total: %d\nAréa Total: %f\nPIB: %f\n.",pontosT, populacao, area, pib);
    return 0;
}
