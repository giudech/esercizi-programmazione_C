/*
 # Terne pitagoriche

 Si scriva un programma che stampi
 tutte le terne pitagoriche
 i cui termini siano minori o uguali a N,
 con N intero positivo inserito dall'utente.

 Una terna pitagorica
 è un insieme di tre numeri interi positivi
 a, b, c tali che:

 a^2 + b^2 = c^2

 Le terne non devono essere ripetute,
 nel senso che la terna [a, b, c]
 è la stessa terna [b, a, c].
*/

#include <stdio.h>

int main() {
    
    int i, j, k, n;
    
    printf("Inserisci n: ");
    scanf("%d",&n);
    
    // per ogni a da 1 ad n
    for (i=1; i <= n; i++) {
        // per ogni b da 2 ad n
        for (j=i+1; j <= n; j++) {
            // per ogni c da 3 ad n
            for (k=j+1; k <= n; k++) {
                // se trovi una terna pitgorica
                if (i*i + j*j == k*k) {
                    // stampala
                    printf("[%d , %d , %d]", i, j, k);
                    printf("\ninfatti %d + %d = %d\n", i*i, j*j, k*k);
                }
            }
        }
    }
    
    return 0;
}