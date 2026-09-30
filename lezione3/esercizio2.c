#include <stdio.h>

int main () {
int numero_fisso = 37;
int n;

scanf("%d", &n);

while (n!=numero_fisso){
     
    if (n<numero_fisso)
        printf("il numero %d è troppo piccolo\n",n);
    

    else 
        printf("il numero %d è troppo grande\n", n);


scanf ("%d", &n); 
       
}

if (n==numero_fisso)
    return 0;

}