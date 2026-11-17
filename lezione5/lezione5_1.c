#include <stdio.h>

int main (void){
//puntatore definizione:
    int a = 5;  //valore:5 ,  indirizzo:13

    int *aPtr = &a; //valore:13 , indirizzo:36
    
//provo a puntare una variabile s e poi un puntatore c che punta al valore contenuto dal puntatore b
    int s = 3;
    int *b = &s;
    int *c = b;
    printf ("%d",*c) ; //se avessi scritto "%d",c mi avrebbe stampato l'indirizzo di c
                       //così invece accede al valore di b che sarebbe l'indirizzo di s, quindi accede a s e guarda il valore
}
/*
Qualsiasi dato/istruzione che sta in memoria ha un valore e un indirizzo in memoria

Un puntatore è una variabile che contiene un indirizzo di memoria
-int *a
-ha a sua volta un indirizzo di memoria
-l'indirizzo della variabile puntata diventa il valore del puntatore, 
 il puntatore prende un'altra posizione in memoria
-il tipo del puntatore è il tipo di dato che mi aspetto di vedere a quell'indirizzo di memoria
-si inizializzano con l'indirizzo di una variabile o con NULL (a nessun indirizzo)
*/



