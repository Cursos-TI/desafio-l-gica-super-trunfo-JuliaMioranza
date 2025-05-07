#include <stdio.h>

int main (){


// **** Nível Mestre ****
//Declaração de variáveis:
char Estado1, Estado2, Codigo1 [5], Codigo2 [5], Cidade1 [50], Cidade2 [50];
int PontosTuristicos1, PontosTuristicos2, resultado1 = 0, resultado2 = 0;
unsigned long int Populacao1, Populacao2;
float Area1, Area2, PIB1, PIB2, Densidade1, Densidade2, PIBpercapita1, PIBpercapita2, SuperPoder1, SuperPoder2;


//Boas vindas
printf("\n Bem-vindo(a), ao super Trunfo!\n");


//Entrada de dados carta 1
printf("\n-----Carta 1----- \n");
printf("\nInforme somente uma letra de um Estado: \n");
scanf(" %c",&Estado1);
printf("Digite o código da sua carta (Ex: A01): \n");
scanf("%s",Codigo1);
printf("Digite o nome da cidade(sem espaços): \n");
scanf("%s",Cidade1);
printf("Informe a população da cidade: \n");
scanf("%lu",&Populacao1);
printf("Digite a Área em km²: \n");
scanf("%f",&Area1);
printf("Informe o PIB: \n");
scanf("%f",&PIB1);
printf("Informe quantos pontos turísticos a cidade possui: \n");
scanf("%d",&PontosTuristicos1);

//Entrada de dados carta2   
printf("\n-----Carta 2-----\n");
printf("\nInforme somente uma letra de um Estado: \n");
scanf(" %c",&Estado2);
printf("Digite o código da sua carta (Ex: B02): \n");
scanf("%s",Codigo2);
printf("Digite o nome da cidade(sem espaços): \n");
scanf("%s",Cidade2);
printf("Informe a população da cidade: \n");
scanf("%lu",&Populacao2);
printf("Digite a Área em km²: \n");
scanf("%f",&Area2);
printf("Informe o PIB: \n");
scanf("%f",&PIB2);
printf("Informe quantos pontos turísticos a cidade possui: \n");
scanf("%d",&PontosTuristicos2);

//Inclusão de calculos:
Densidade1 = Populacao1 / Area1;
PIBpercapita1 = PIB1 / Populacao1;

Densidade2 = Populacao2 / Area2;
PIBpercapita2 = PIB2  / Populacao2;


// Saída de dados carta 1:
printf("\n***Carta 1***\n");
printf("Estado: %c\n", Estado1);
printf("Código: %s\n",Codigo1);
printf("Cidade: %s\n",Cidade1);
printf("População: %lu\n",Populacao1);
printf("Área: %.2f km²\n",Area1);
printf("PIB: %.2f Bilhões de reais\n",PIB1);
printf("Pontos Turísticos: %d\n",PontosTuristicos1);
printf("Densidade Populacional é igual a %.2f hab/km²\n",Densidade1);
printf("PIB per capita: %.2f reais\n",PIBpercapita1);
// Saída de dados carta 2:
printf("\n***Carta 2****\n");
printf("Estado: %c\n", Estado2);
printf("Código: %s\n",Codigo2);
printf("Cidade: %s\n",Cidade2);
printf("População: %lu\n", Populacao2);
printf("Área: %.2f km²\n",Area2);
printf("PIB: %.2f Bilhões de reais\n",PIB2);
printf("Pontos Turísticos: %d\n",PontosTuristicos2);
printf("Densidade Populacional é igual a %.2f hab/km²\n",Densidade2);
printf("PIB per capita: %.2f reais\n",PIBpercapita2);

//Calculando Super Poder:
SuperPoder1 = (float)Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBpercapita1 - Densidade1;
SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBpercapita2 - Densidade2;

//inclusão de Menu interativo

int opcao1, opcao2;

printf("\nEscolha o primeiro atributo para comparar. \n");
printf("1 - População\n");
printf("2 - Área.\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Populacional(menor vence)\n");
scanf("%d",&opcao1);

switch (opcao1) {
    case 1: printf("Você escolheu comparar a população...\n");
    resultado1 = Populacao1 > Populacao2 ? 1 : 0;
    break;
    case 2: printf("Você escolheu comparar a área em km²...\n");
    resultado1 = Area1 > Area2 ? 1 : 0;
    break;
    case 3: printf("Você escolheu comparar o PIB...\n");
    resultado1 = PIB1 > PIB2 ? 1 : 0;
    break;
    case 4: printf("Você escolheu comparar Pontos Turísticos...\n");
    resultado1 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
    break;
    case 5: printf("Você escolheu comparar densidade populacional...\n");
    resultado1 = Densidade2 > Densidade1 ? 1 : 0;
    break;
    default:
    printf("Opção inválida!\n");
    break;
}

printf("\n       ****Atenção*****\n");
printf("O segundo atributo deve ser diferente do primeiro que escolheu****\n");
printf("\nEscolha o segundo atributo para comparar.\n");
printf("1 - População\n");
printf("2 - Área.\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Populacional(menor vence)\n");
scanf("%d",&opcao2);

if (opcao1 == opcao2){
    printf("Opção inválida, você escolheu o mesmo atributo!\n");
}else{
  switch (opcao2) {
    case 1: printf("Você escolheu comparar a população...\n");
    resultado2 = Populacao1 > Populacao2 ? 1 : 0;
    break;
    case 2: printf("Você escolheu comparar a área em km²...\n");
    resultado2 = Area1 > Area2 ? 1 : 0;
    break;
    case 3: printf("Você escolheu comparar o PIB...\n");
    resultado2 = PIB1 > PIB2 ? 1 : 0;
    break;
    case 4: printf("Você escolheu comparar Pontos Turísticos...\n");
    resultado2 = PontosTuristicos1 > PontosTuristicos2 ? 1 : 0;
    break;
    case 5: printf("Você escolheu comparar densidade populacional...\n");
    resultado2 = Densidade2 > Densidade1 ? 1 : 0;
    break;
    default:
    printf("Opção inválida!\n");
    break;
}
}
// Verifica e imprime o resultado da comparação:
if ((resultado1 == 1) &&( resultado2 == 1)){
    printf("\nCarta 1 venceu em ambos os atributados!\n");
}else if ((resultado1 == 0)&&(resultado2 == 0)){
    printf("\nCarta 2 venceu em ambos os atributos\n");
}else if((resultado1 == 1)&&(resultado2 == 0)){
    printf("\nCarta 1 venceu o primeiro atributado!\n");
    printf("Carta 2 venceu o segundo atributo!\n");
}else if ((resultado1 == 0)&&(resultado2 == 1)){
    printf("\nCarta 2 venceu o primeiro atributo!\n");
    printf("Carta 1 venceu o segundo atributo!\n");
}else {
    printf("Houve um empate!\n");
}


//Finaliza informando qual foi a carta que venceu todos os atributos:
printf("\nComparando Super Poder total...\n");
if(SuperPoder1 > SuperPoder2){
    printf("\nCarta 1 é a grande vencedora com Super Poder!\n");
}else if(SuperPoder1 < SuperPoder2){
    printf("\nCarta 2 é a grande vencedora com Super Poder!\n");
}else{
    printf("\nEmpate no Super Poder!\n");
}

//Mensagem de finalização do jogo:
printf("\nFim de jogo!\n");

return 0;




}
