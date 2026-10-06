#include <stdio.h>
#include "max.h"

extern int countA; //ignorare, non detto dal professore.
int main (void){

    int a=0 , b=0;

    do {
        scanf("%d %d", &a, &b);
        printf ("Max (%d,%d) = %d\n", a, b, max (a,b));
     }
     while (a!=b);

     printf ("Hai inserito a>b %d volte\n", countA);
     return 0;
}