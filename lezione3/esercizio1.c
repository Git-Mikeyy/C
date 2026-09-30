#include <stdio.h>

int main (){
    int n;  //valori che vogliamo inserire
    int quanti = 0;  //numeri che sono stati inseriti (negativi e positivi, non zero)
    int positivi = 0;
    int negativi = 0;
    int somma_positivi = 0; //somma dei valori positivi inseriti
    
    scanf("%d", &n);  //input dei numeri da tastiera
    while (n!=0){  //fino a che non inserisco 0 ...
        quanti++;  //aggiunge 1 a quanti numeri inserisco ogni volta
        if (n>0){
            positivi++;
            somma_positivi += n; //fa la somma e la registra
        }
        else{
            negativi++;
        }
        scanf("%d", &n); //serve a continuare a inserire i numeri, altrimenti il codice si ferma al primo numero
        } 
    
        printf("Numeri : %d\n", quanti);
        printf("Positivi : %d\n", positivi);
        printf("Negativi : %d\n", negativi);
        printf("Somma positivi : %d\n", somma_positivi);

        return 0;
    }