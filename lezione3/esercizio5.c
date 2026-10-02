#include <stdio.h>
int a [10];
int b [10];
int prodotto_scalare = 0;
int i = 0;


int main (){

    for (; i<10 ; i++){ //riempi il primo vettore
        printf("inserisci valore del vettore a\n");
        scanf("%d", &a[i]);
    }

    for (i=0; i<10 ; i++){
        printf("inserisci il valore del vettore b\n");
        scanf("%d", &b[i]);
    }

    for (i=0; i<10 ; i++){
        prodotto_scalare += a[i] * b[i];
    }

    printf("prodotto scalare: %d \n", prodotto_scalare);


    return 0;
}