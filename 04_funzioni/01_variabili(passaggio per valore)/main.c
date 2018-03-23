#include <stdio.h>

// variabili globali
int a = 5;
int b = 7;

// dichiarazione di funzione
// valore_di_ritorno nome_funzione (parametri formali)
int somma(int a, int e) { // corpo della funzione

    // variabile locale alla funzione somma()
    int d = a + e;

    // operazione eseguita ad ogni chiamata di somma()
    printf("%d %d\n", a, e);

    // valore di ritorno della funzione
    return d; 
}

int main() {

    // variabili locali al main()
    int b = 6, c = 4;

    // assegno a c il valore che ritorna somma()
    c = somma(c , c); //stampa 4 4

    printf("%d %d %d\n", a, b, c); //stampa 5 6 8

    //printf("%d", d); 
    //errore, d non è definita

    return 0;
    
}
