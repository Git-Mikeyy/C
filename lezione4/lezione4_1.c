#include <stdio.h>
/*FUNZIONI

Astrazioni di blocchi di codice con un nome. 
Implementate per essere riutilizzate.
La prima a essere eseguita è sempre main.

Ogni funzione viene identificata con un tipo di ritorno, da un nome, dalla lista dei parametri
in ingresso.

tipo nome_funzione (lista_parametri){}*/


int max (int, int); 
//Prototipo di funzione, informa sul nome, tipo di ritorno e parametri formali. 


int main (void){

    int a = 5 , b= 10;

    printf("%d\n", max (a,b)); //Qui viene invocata la funzione che riceve due espressioni int,
                               //finito con la funzione chiamata, ritorna nel print e stampa.
}
//Ricordiamo che in C i parametri vengono passati per valore, quelli "inviati" sono copie e possono avere nome diverso.
int max (int a , int b){
    if (a>b)
        return a; 
        //Questi return servono a ritornare alla funzione chiamante, ovvero il main.
    return b;
}
//NON SI POSSONO SCRIVERE FUNZIONI DENTRO FUNZIONI.

/*
tipo : indica il valore restituito, può essere void (non riceve nulla in ingresso)
Nome : uguale agli identificatori
Lista parametri : elenco di coppie tipo-identificatore separate da virgole.

i parametri formali possono essere usati nella funzione
se i parametri non ci sono si mette (Void) oppure ()

*/

//File Header (.h)
/*Un file header è un file di "intestazione" il quale può contenere:
dichiarazioni di funzioni e costanti.
posso dichiarare un file come a.h e riusarlo in un'altro file facendo #include a.h
*/