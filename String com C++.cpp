#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
setlocale(LC_ALL,"");

//Definindo String
    string palavra;

//Imprimindo na tela
    cout << "Digite uma palavra: ";

//Lendo uma String
    cin >> palavra;

//Imprimindo uma vari�vel
    cout << "\n A palavra �:" << palavra;

return 0;



}
