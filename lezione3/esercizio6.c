#include <stdio.h>
int a [10] [10];
int b [10] [10];
int i = 0;
int j = 0;
int prodotto_scalare;

int main (){

    for(;i<10 ;i++){

        for (j=0 ; j<10 ; j++){

            a [i] [j] = 2;
        }

}

    for(i=0;i<10 ;i++){

        for(j=0 ; j<10 ; j++ ){
            b [i] [j] = 3;
        }

    }

    for (i=0, j=0 ; i<10 ; i++){
        for (j=0; j<10 ; j++){
            prodotto_scalare += a [i] [j] * b [i] [j];
        }
    }

    printf("il prodotto scalare è : %d\n", prodotto_scalare);


    return 0;
}