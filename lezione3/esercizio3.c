#include <stdio.h>

int main (){
    int a;
    int b;
    int quoziente_intero;
    float quoziente_reale;

    printf("inserisci il primo valore:");
    scanf("%d", &a);

    printf("inserisci il secondo valore:");
    scanf("%d", &b);

    quoziente_intero = a/b;
    quoziente_reale = (float) a/b;

    printf ("quoziente intero:%d\n", quoziente_intero);
    printf ("quoziente reale:%.2f\n", quoziente_reale);

    return 0;
}