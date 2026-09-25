#include <stdio.h>

int main (){
    int a = sizeof (int); 
    a = !a; //mi trasforma il valore assegnato ad a in 0
    printf ("%d\n", a);

    return 0;
}