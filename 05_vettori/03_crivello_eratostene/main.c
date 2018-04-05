/*
 # Crivello di Eratostene
 
 Il crivello di Eratostene è un antico procedimento
 per il calcolo delle tabelle di numeri primi
 fino ad un certo numero N prefissato.
 Il procedimento è il seguente:
 si scrivono tutti i numeri naturali a partire da 2
 fino N in un elenco detto setaccio.
 Poi si cancellano (setacciano)
 tutti i multipli del primo numero del setaccio
 (escluso lui stesso).
 Si prende poi il primo numero non cancellato
 maggiore di 2 e si ripete l'operazione
 con i numeri che seguono,
 proseguendo fino a che non si applica l'operazione
 all'ultimo numero non cancellato.
 I numeri che restano
 sono i numeri primi minori o uguali a n.
 
 */

#include <stdio.h>

#define N 1000

int main() {
    
    int setaccio[N], i, j;
    
    // (partendo da 0) finche' i < N
    for (i = 0; i < N; i++)
        // assegno ad ogni el. del setaccio il valore 1
        setaccio[i] = 1;
    // (incremento i)
    
    // (partendo da 2) finche' i <= (N / 2)
    for (i = 2; i <= N/2; i++) {
        // se l'el.corrente del setaccio contiene il valore 1
        if (setaccio[i] == 1)
            // (partendo da 4) finche' j < N
            for (j = i*2; j < N; j = j + i)
                // assegno all'el.j-esimo il valore 0
                setaccio[j] = 0;
            // (incremento j sommandogli il valore corrente di i)
    // (incremento i)
    }
    
    // (partendo da 2) finche' i < N
    for (i = 2; i < N; i++)
        // se il setaccio contiene il valore 1
        if (setaccio[i] == 1)
            printf("%d\n", i); // stampo l'indice del setaccio
    // (incremento i)
    
    return 0;
    
}
