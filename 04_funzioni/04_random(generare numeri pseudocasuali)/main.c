/*
# Fuzione random

Si scriva una funzione che,
utilizzando le funzioni del C
per la generazione di numeri pseudocasuali,
produca un numero casuale
compreso all'interno di un certo intervallo [a,b),
con a e b numeri interi
passati come parametri della funzione
(si supponga che a < b).

Si scriva successivamente un semplice programma
per verificare la correttezza della funzione scritta.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// passo gli estremi tra cui estrarre i casuali
int my_rand(int min, int max) {
    
    int casuale = rand() % (max - min + 1) + min;
    
    return casuale; // restituisce il un numero casuale
    // ( in presenza di srand((unsigned)time(NULL)) )
    
}

int main() {
    
    int i;
    
    // generatore di numeri casuali
    srand((unsigned)time(NULL));
    
    //Simula 20 lanci di un dado a 6 facce
    // partendo da 0 finche' i < 20 (incrementa i)
    for (i = 0; i < 20; i++)
        // stampa il risultato di my_rand(min,max)
        printf("%d ", my_rand(1,6));
    
    return 0;
    
}