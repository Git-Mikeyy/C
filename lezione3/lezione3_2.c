#include <stdio.h>
#define LEN 20  //mi serve a definire la grandezza dell'array

struct Studente {  //struttura che mi da dati di uno studente
    char nome [LEN];  //LEN verrà sostituito con 20
    int eta;
};  //nota che le strutture hanno bisogno del ;

int main () {

    struct Studente s = {"Antonio", 15}; //accedo alla struct e assegno in ordine nome e età

    printf("Nome: %s, Età: %d\n", s.nome, s.eta);
    printf("Dimensione in memoria: %lu\n", sizeof(s));
    
    return 0;

}
/* int a[3] [3]; alloca un array di 3 righe e 3 colonne di un intero (9 interi contigui)
Gli array multidimensionali (come sopra), solo allocati per righe. Gli usiamo per rappresentare matrici Mij
*/
