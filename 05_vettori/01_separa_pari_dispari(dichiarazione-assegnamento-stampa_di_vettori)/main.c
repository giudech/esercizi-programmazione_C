/*
 # Separa pari e dispari
 
 Scrivere un programma che, dati in input N valori,
 con N che al massimo vale 100, li riscriva a video,
 stampando prima tutti i numeri pari e successivamente
 tutti i numeri dispari inseriti.
 
 */

#include <stdio.h>

// devo sempre definire la dimensione del vettore
#define D_MAX 100

int main() {
    
    // dichiaro un vettore di D_MAX elementi
    int v[D_MAX], N, i;
    
    printf("Quanti valori vuoi inserire? ");
    scanf("%d", &N);
    
    // (partedndo da 0) finche' i < del max dei numeri da inserire
    for (i = 0; i < N; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]); // assegno all'elemento corrente
        // un valore inserito da tastiera
        // (incremeno i)
    }
    
    printf("PARI\n");
    // (partendo da 0) finche' i < del max dei numeri da inserire
    for (i = 0; i < N; i++)
        // se pari
        if (v[i] % 2 == 0)
            // stampa l'elemento corrente
            printf("v[%d] = %d\n", i, v[i]);
    
    printf("DISPARI\n");
    // (partendo da 0) finche' i < del max dei numeri da inserire
    for (i = 0; i < N; i++)
        // se dispari
        if (v[i] % 2 != 0)
            // stampa l'elemento corrente
            printf("v[%d] = %d\n", i, v[i]);
    
    return 0;
    
}
