#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 3

void main(){
setlocale(LC_ALL,"");

//Definindo Variavel
int vetor[TAM], cont;

//Passando Valores para o Vetor
vetor[0] = 5;
vetor[1] = 10;
vetor[2] = 15;

//Adicionando 1 para a posi��o
for(cont = 0; cont < TAM; cont++){
    vetor[cont] = vetor[cont] + 1;
}

//Exibindo os valores do Vetor
printf("\n Posi��o 0: %d", vetor[0]);
printf("\n Posi��o 1: %d", vetor[1]);
printf("\n Posi��o 2: %d", vetor[2]);

//Imprimindo Vetor em um la�o de repeti��o
for(cont = 0; cont < TAM; cont++){
    printf("\n Posi��o %d : %d",cont, vetor[cont]);

}

//Lendo 3 valores para o vetor
for(cont = 0; cont < TAM; cont++){
    scanf("%d", &vetor[cont]);

}

//Imprimindo vetor em um la�o de repeti��o
for(cont = 0; cont < TAM; cont++){
    printf("\n Posi��o %d : %d",cont, vetor[cont]);

}


}
