#include <stdio.h>
int a [10];
int i;
int tmp = 0;
int main () {

printf("inserisci i valori dell'arrray\n");

    for (i=0 ; i<10 ; i++){
        scanf("%d", &a[i]);
    }

    for (i=0 ; i<5 ; i++){

        tmp = a[i];
        a[i] = a[9-i];
        a[9-i] = tmp;
    }

    printf("\n");

    for (i=0 ; i<10 ; i++)
        printf("%d \n", a[i]);

    return 0;
}