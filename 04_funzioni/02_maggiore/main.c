/*
# Maggiore tra due numeri

Si scriva una funzione che, 
dati due numeri interi come parametri, 
restituisca il maggiore dei due.

Si scriva successivamente un semplice programma 
per verificare la correttezza della funzione scritta.

*/

#include <stdio.h>

// funzione che trova il maggiore tra 2 numeri
int maggiore(int a, int b) {
    // se a > b
    if (a > b)
        return a; // ritorna a
    // altrimenti
    else
        return b; // ritorna b
}

int main() {

    int n, m;

    printf("Inserisci due valori interi: ");
    scanf("%d", &n);
    scanf("%d", &m);

    printf("Il maggiore e' %d", maggiore(n,m));

    return 0;
}
