#include <stdio.h>
int a [10];
int i;
int n = 10 ; 
int tmp = 0;
int main () {

printf("inserisci i valori dell'arrray\n");

    for (i=0 ; i<10 ; i++){
        scanf("%d", &a[i]);
    }

    //qui manca la parte dello scambio

    for (i=0 ; i<10 ; i++)
        printf("%d", a[i]);

    return 0;
}