#include <stdio.h>

int main (){
    int n;  //valori che vogliamo inserire
    int quanti = 0;
    int positivi = 0;
    int negativi = 0;
    int somma_positivi = 0;
    
    scanf("%d", &n);
    while (n!=0){
        quanti++;
        if (n>0){
            positivi++;
            somma_positivi += n;
        }
        else{
            negativi++;
        }
        scanf("%d", &n);
        } 
    
        printf("Numeri : %d\n", quanti);
        printf("Positivi : %d\n", positivi);
        printf("Negativi : %d\n", negativi);
        printf("Somma positivi : %d\n", somma_positivi);

        return 0;
    }