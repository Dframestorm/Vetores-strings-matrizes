#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main(){
setlocale(LC_ALL,"");

//Definindo Variavel
char palavra[10];

//Digite uma palavra
printf("Digite uma palavra: \n");

//Limpar o Buffer
setbuf(stdin, 0);

//Ler a String
fgets(palavra, 255, stdin);

//Limpar as casas não utilizadas
palavra[strlen(palavra)-1] = '\0';

//Imprime na Tela
printf("%s", palavra);





}
