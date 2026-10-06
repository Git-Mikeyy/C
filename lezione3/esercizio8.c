#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef enum {dirigente, quadro, operaio, impiegato} ruolo_t;

typedef struct {
int id;
int eta;
float salario;
ruolo_t ruolo;
} dipendente_t;


int main (int argc , char *argv []) {
int i , id_dip , eta_dip , ruolo_dip , eta;
float media = 0 , salario_dip;
dipendente_t dipendenti [N];
scanf ("%d", &eta);
for (i=0 ; i<N ; i++){
printf ("Inserire id, eta, salario e ruolo del dipendente %d: ", i+1);
scanf("%d", &id_dip);
scanf("%d", &eta_dip);
scanf("%f", &salario_dip);
scanf("%d", &ruolo_dip);
dipendenti [i].id = id_dip;
media += salario_dip;
}

media /= N;

for (i=0 ; i<N ; i++){
    if (dipendenti [i]. salario < media && dipendenti [i].eta <= eta){
        printf("%d", dipendenti [i].id);
        printf("%d", dipendenti [i].eta);

        switch (dipendenti [i]. ruolo){
            case dirigente:
                printf("dirigente\n");
                break;
            case quadro:
                printf("quadro\n");
                break;
            case operaio:
                printf("operaio\n");
                break;

            default:
                printf("impiegato\n");
        }
    }
}
    return 0;
}