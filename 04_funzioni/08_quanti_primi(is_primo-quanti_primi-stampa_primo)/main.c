/*
 # Numero di primi compresi in un intervallo
 
 Si scriva una funzione che conti quanti sono
 i numeri primi compresi in un certo intervallo [a, b),
 con a e b numeri interi passati come parametri alla funzione
 (si supponga che a<b).
 Si suggerisce di definire prima la funzione primo
 che verifica se un numero n passato come parametro è primo
 (un numero e' primo solo se divisibile per 1 e per se stesso),
 per poterla utilizzare all'interno della funzione principale,
 in modo da semplificarne la scrittura.
 
 Si scriva successivamente un semplice programma
 per verificare la correttezza della funzione scritta.
 
 */

#include <stdio.h>
#include <math.h>

// funzione che restituisce 1 se primo 0 altrimenti
int is_primo (int N) {
    
    int i;
    
    // partendo da 2, finche' i <= alla radice di N
    for (i = 2; i <= sqrt(N); i++)
        // se il N e' interamente divisibile per i
        if (N % i == 0)
            // non e' primo
            return 0;
    // (incremento i)

    // (altrimenti) e' primo
    return 1;
}

// funzione che conta i numeri primi in un intervallo
int conta_primi (int a, int b) {
    
    int i, contatore = 0;
    // partendo da a, finche' i < b
    for (i = a; i < b; i++)
        // se primo
        if (is_primo(i))
            // tieni il conto
            contatore++;
    // (incremento i)
    return contatore; // restituisce quanti primi trova
    
}

// funzione extra es. per vedere i numeri primi nel range scelto
void stampa_primi (int a, int b) {
    int i;
    for (i = a; i < b; i++) {
        if (is_primo(i))
            printf("%d\n",i);
    }
}

int main() {
    
    //Esempio: conto quanti numeri primi ci sono tra 2 e 100
    printf("Ci sono %d tra 2 e 100\n", conta_primi(2, 101));
    
    stampa_primi(2, 101);
    
    return 0;
    
}
