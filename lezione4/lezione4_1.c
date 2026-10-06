#include <stdio.h>
/*FUNZIONI

Astrazioni di blocchi di codice con un nome. 
Implementate per essere riutilizzate.
La prima a essere eseguita è sempre main.

Ogni funzione viene identificata con un tipo di ritorno, da un nome, dalla lista dei parametri
in ingresso.

tipo nome_funzione (lista_parametri){}*/


int max (int, int);


int main (void){

    int a = 5 , b= 10;

    printf("%d\n", max (a,b));
}

int max (int a , int b){
    if (a>b)
        return a;

    return b;
}

/*
tipo : indica il valore restituito, può essere void (non riceve nulla in ingresso)
Nome : uguale agli identificatori
Lista parametri : elenco di coppie tipo-identificatore separate da virgole.

i parametri formali possono essere usati nella funzione
se i parametri non ci sono si mette (Void) oppure ()

*/