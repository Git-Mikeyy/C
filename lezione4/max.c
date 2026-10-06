#include "max.h" //si usano le "" perché altrimenti con <> il compilatore va a cercare fuori da questa cartella.
//Questo file contiene l'implementazione vera e propria della funzione max

int countA = 0;
int countB = 0;

int max (int a , int b) {
    if (a>b){
        countA ++;
        return a;
    }
    countB ++;
    return b;
}