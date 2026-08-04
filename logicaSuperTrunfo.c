#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    //Declaraçao de carta 1
unsigned int populaçao_1 =54223;
unsigned int pontos_turisticos_1 = 20;
float area_km2_1 = 3308.1;
float Pib_1 = 258610910.75;
char estado_1 [20] = "MG";
char codigo_1 [5] = "A01";
char cidade_1 [50] = "SF";
float densidade_demografica_1;
float Pib_per_capita_1;

//Declaraçao de carta 2

unsigned int populaçao_2 = 2817381;
unsigned int pontos_turisticos_2 = 40;
float area_km2_2 = 5760.784;
float Pib_2 = 365669107.906;
char estado_2 [20] = "DF";
char codigo_2 [5] = "B02";
char cidade_2 [50] = "Brasilia";
float densidade_demografica_2;
float Pib_per_capita_2;

//---CAUCULOS DOS ATRIBUTOS DERIVADOS---

densidade_demografica_1 = (float) populaçao_1/area_km2_1;
Pib_per_capita_1 =Pib_1/(float)populaçao_1;


densidade_demografica_2 = (float) populaçao_2/area_km2_2;
Pib_per_capita_1 =Pib_2/(float)populaçao_2;

//Exibiçao dos resultados formatados 
printf("densidade demografica_1:%.2f hab/km2\n",densidade_demografica_1);
printf("Pib per capita-1:R$ %.2f por habitante\n",Pib_per_capita_1);

printf("densidade demografica_2:%.2f hab/km2\n",densidade_demografica_2);
printf("Pib per capita_2:R$ %.2f por habitante\n",Pib_per_capita_2);




    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // --- Entrada de dados carta 1 ---
    printf("===CADASTRO DA CARTA 1 === \n");
    printf("Digite a populaçao: ");
    scanf("%u", &populaçao_1);
    printf("digite o pontos turisticos: ");
    scanf("%u", &pontos_turisticos_1 );
    printf("digite a area ");
    scanf("%f", &area_km2_1);
    printf("digite o Pib: ");
    scanf("%f", &Pib_1);
    printf("digite o estado: ");
    scanf("%s",estado_1);
    printf("digite o codigo: ");
    scanf("%s",codigo_1);
    printf("digite o nome da cidade:");
    scanf("%s",cidade_1);

   
// --- Entrada de dados carta 2 ---
printf("===CADASTRO DA CARTA 2===\n");
    printf("Digite a populaçao: ");
    scanf("%u", &populaçao_2);
    printf("digite o pontos turisticos: ");
    scanf("%d", &pontos_turisticos_2 );
    printf("digite a area ");
    scanf("%f", &area_km2_2);
    printf("digite o Pib: ");
    scanf("%f",&Pib_2);
    printf("digite o estado: ");
    scanf("%s",estado_2);
    printf("digite o codigo: ");
    scanf("%s",codigo_2);
    printf("digite o nome da cidade:");
    scanf("%s",cidade_2);

    
// --- COMPARAÇAO E EXIBIÇAO DE RESULTADO ---
printf("\n =================================== \n");
printf("          RESULTADO DA COMPATRAÇAO            \n");
printf(" =======================================\n");

printf("Atributo:Pib\n");

printf("carta_1 (%s):%.2f\n",cidade_1,Pib_1);
printf("carta_2 (%s):%.2f\n",cidade_2,Pib_2);

if (Pib_1>Pib_2) {
    printf("Resultado:carta_2 (%s) venceu!\n" ,cidade_2);
}else (Pib_1>Pib_2){
    printf("Resultado:carta_1 (%s) venceu!\n" ,cidade_1);
    printf("Resultado:Empate!\n");
    printf("A cidade vencedora e:%s\n",cidade_2)
}



    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);




    return 0;
}
