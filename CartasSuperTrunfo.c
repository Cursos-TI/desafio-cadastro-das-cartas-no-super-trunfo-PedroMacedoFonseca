#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Variáveis e seus tamanhos [Pais] [Cidade] [espaços]
    char NomePais[8][30];
    char NomeCidade[8][4][30];
    char ID[8][4][4]; 
    int popul[8][4];
    int pturist[8][4];
    float area[8][4];
    float PIB[8][4];
    //Estrutura de laço para poder receber os dados dos 8 paises e as 4 cidades de cada um. ++ significa soma 1.
    for (int i = 0; i < 8; i++) {
        printf("Qual o nome do Pais %c: (sem espaços e pontuações) \n", 'A' + i);
        scanf("%s", NomePais[i]);

        for (int j = 0; j < 4; j++) {
            printf("Qual o nome da Cidade %d do Pais %c: (sem espaços e pontuações)\n", j + 1, 'A' + i);
            scanf("%s", NomeCidade[i][j]);

            printf("Escolha o identificador para a cidade %d do Pais %c (A-H e 01-04): \n", j + 1, 'A' + i);
            scanf("%3s", ID[i][j]);

            printf("Qual a população da cidade %d do Pais %c?\n", j + 1, 'A' + i);
            scanf("%d", &popul[i][j]);

            printf("Qual a área total em quilometros quadrados da cidade %d do Pais %c: (use o ponto para separação)\n", j + 1, 'A' + i);
            scanf("%f", &area[i][j]);

            printf("Qual o Produto Interno Bruto da cidade %d do Pais %c (em Bilhões/R$)?\n", j + 1, 'A' + i);
            scanf("%f", &PIB[i][j]);

            printf("Quantos pontos turisticos a cidade %d do Pais %c possui?\n", j + 1, 'A' + i);
            scanf("%d", &pturist[i][j]);
        }
    }
    //Exibição dos dados que foram fornecidos
    for (int i = 0; i < 8; i++) {
        printf("\nPais %c: %s\n", 'A' + i, NomePais[i]);
        for (int j = 0; j < 4; j++) {
            printf("\nCidade %d do Pais %c cadastrada: %s. O ID é: %s\n", j + 1, 'A' + i, NomeCidade[i][j], ID[i][j]);
            printf("População: %d habitantes. Área: %.2f km². Pontos turísticos: %d.\n", popul[i][j], area[i][j], pturist[i][j]);
            printf("Produto Interno Bruto: %.2f Bilhões/R$.\n", PIB[i][j]);
        }
    }

    return 0;
}
