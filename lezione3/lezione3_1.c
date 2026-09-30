#include<stdio.h>

int main (void){
    int n = 12345;
    int cifre [10];
    int dim = 0;

    for (; n!=0 ; dim++, n/=10){
        cifre [dim] = n%10;
    }

    for (int i = 0; i<dim ; i++){
        printf ("%d\n", cifre[i]);
    }

    return 0;
}