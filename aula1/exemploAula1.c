//Um diabético tem de fator correção de carboidrato. O sistema precisa solicitar o boulos de correção (dg/ml por carboidrato) e a quantidade de carboidrato ingerido. 
#include<stdio.h> 
#include<stdlib.h>
int main(){

    char nome[30];

    //entradas
    int boulosAlimentar;
    int carboidratoIngerido;
    int quantidadeInsulnaMaxima; 

    //saidas
    int quantidadeInsulina;
    int restanteInsulinaDia; 
    int quantidadeMaximaCarboidrato; 

    printf("Digite seu nome: \n");
    gets(nome);  
    printf("Digite o seu boulos de correcao: \n");
    scanf("%i", &boulosAlimentar);
    printf("Digite a quantidade de carboidrato ingerido: \n");
    scanf("%i", &carboidratoIngerido); 
    printf("Digite sua quantidade maxima de insulina diaria: \n");
    scanf("%i", &quantidadeInsulnaMaxima); 

    quantidadeInsulina = carboidratoIngerido / boulosAlimentar; 
    restanteInsulinaDia = quantidadeInsulnaMaxima - quantidadeInsulina; 
    quantidadeMaximaCarboidrato = boulosAlimentar * quantidadeInsulina; 

    printf("Sua quantidade necessaria de insulina: %i \n", quantidadeInsulina);
    printf("Sobra de insulina: %i \n", restanteInsulinaDia);
    printf("Quantidade maxima de carboidratos que pode consumir: %i \n", quantidadeMaximaCarboidrato); 

return 0; 
}
