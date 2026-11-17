#include <stdio.h>

int main (void) {

/*
Si può usare il puntatore direttamente in espressioni tra puntatori, 
ma non con altri tipi interi.

Possiamo leggere e usare l'indirizzo di memoria di una variabile tramite &.

Deferenziazione : possiamo leggere/scrivere il valore memorizzato ad un indirizzo di memoria
                  attraverso un puntatore usando l'operatore *

*/

//uso di puntatori

int b = 1;
int c = 22;
int *a = &c;
*a = b + *a; //viene cambiato il valore contenuto in c
a = b + *a //NO! a è un puntatore non un intero!
*a = b + a //NO!a è un puntatore, non si può sommare ad un intero


printf("Il valore di b è %d, l'indirizzo di b è %p\n", b, &b);
printf("Il valore di a è %p, l'indirizzo di a è %p\n", a, &a);
}