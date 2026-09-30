#include <stdio.h>

int main () {
int numero_fisso = 37;
int n;


printf("inserisci un numero\n");
scanf("%d", &n);

while (n!=numero_fisso){    
    
    
    if (n<numero_fisso)
        printf("il numero %d è troppo piccolo\n",n);
    

    else 
        printf("il numero %d è troppo grande\n", n);


scanf ("%d", &n); 
       
}

if (n==numero_fisso){
    printf("hai indovinato il numero!\n");
    return 0;
}
}