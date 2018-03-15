/*
 # Calcolo del fattoriale
 
 Dato un numero intero positivo N,
 calcolare il suo [fattoriale N!]
 https://it.wikipedia.org/wiki/Fattoriale
 
 Suggerimento: utilizzare i long long int
 per riuscire a rappresentare numeri più grandi.
 
 */

#include <stdio.h>

int main() {
    
    long int fattoriale = 1, N;
    int i;
    
    printf("Inserisci il numero di cui vuoi calcolare il fattoriale: ");
    scanf("%ld", &N); // es. 5
    
    // assegno i = 1, finche' i <= N, eseguo il corpo del for ed incremento i
    for (i = 1; i <= N; i++)
        fattoriale = fattoriale * i;
    // i1) fattoriale = (1 * 1)    1, i=2
    // i2) fattoriale = (1 * 2)    2, i=3 verifico condizione
    // i3) fattoriale = (2 * 3)    6, i=4 verifico condizione
    // i4) fattoriale = (6 * 4)   24, i=5 verifico condizione
    // i5) fattoriale = (24 * 5) 120, i=6 verifico condizione (STOP)

    printf("Il fattoriale di %ld vale %ld\n", N, fattoriale);
    
    return 0;
}

