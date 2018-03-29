/*
 # Estrarre la k-esima cifra da un numero intero
 
 Si scriva una funzione che ritorni la k-esima
 cifra di un numero intero n,
 dove sia k che n devono essere passati come parametri.
 Se k fosse ≤ 0 oppure > del numero di cifre di n,
 la funzione restituirà -1.
 
 Si scriva successivamente un semplice programma
 per verificare la correttezza della funzione scritta.
 
 */

#include <stdio.h>

// conta le cifre del numero
int n_cifre(int N) {
    
    int i = 0; // contatore
    
    // finche' N > 0
    while(N > 0) {

        N = N / 10; // divido per 10 in modo da eliminare 1 cifra
        
        i++; // tengo il conto delle iterazioni = n° di cifre
        
    }
    
    return i; // restituisce il numero di cifre
    
}

// restituisce la cifra cercata nel numero
int cifra_k(int N, int k) {
    
    // se la cifra k e' <= 0 oppure > del numero di cifre di N
    if (k <= 0 || k > n_cifre(N))
        return -1; // restituisce -1
    
    int i, resto = 0;
    
    // partendo da 0, finche' non arrivo alla k-esima cifra,
    for (i = 0; i < k; i++) {
        
        resto = N % 10; // conservo il resto della divisione per 10

        N = N / 10; // divido N per 10
    
    //(incremento i)
    }
    
    return resto; // restituisce la cifra cercata
    
}

int main() {
    
    //Esempio per verificare il funzionamento
    int i, N = 34876;
    
    printf("%d\n", N);
    
    // partendo da 1, finche' i <= del n° di cifre del numero
        for (i = 1; i <= n_cifre(N); i++ )
        // stampo la i-esima cifra,
        // ovvero il numero dall'ultima alla prima cifra
        printf("%d", cifra_k(N, i));
    // (incremento i)

    printf("\n");
    
    return 0;
    
}
