#include <stdio.h>
int n;
int i;

float valore;
int valore_intero;

int pari = 0;
int conteggio_pari=0;

int conteggio_dispari=0;
int dispari = 0;


int main()
{
    printf("quanti valori vuoi inserire?\n"); 
    //qui chiedo QUANTI valori l'utente vuole inserire, mi serve per il ciclo iterativo
    scanf("%d", &n);

    for (i=0 ; i<n ; i++){

        printf("Inserisci un valore: ");
        scanf("%f", &valore);

        valore_intero = (int) valore;

        if(valore_intero % 2 == 0){
            pari = valore_intero;
            conteggio_pari++;
        }

        else {
            dispari = valore_intero;
            conteggio_dispari++;
        }
    }

        printf("Hai inserito %d pari\n", conteggio_pari);

    
        printf("Hai inserito %d dispari\n", conteggio_dispari);


    return 0;
}