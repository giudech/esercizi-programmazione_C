/*

# Calcolo del seno con lo sviluppo in serie di Taylor

Si scriva una funzione che calcoli 
il valore della funzione seno 
utilizzando lo sviluppo in serie di Taylor:

[Sviluppo in serie di Taylor della funzione seno]
                                                    (-1)^n
sin x = la sommatoria che va da 0 ad infinito di  --------- x^2n+1  per ogni x
                                                  (2n + 1)!

fermato al termine n-esimo,
con x (angolo) e n (n° di termini) parametri della funzione. 

Si suggerisce di definire prima le funzioni potenza e fattoriale, 
per poterle utilizzare all'interno della funzione principale, 
in modo da semplificarne la scrittura.

Si scriva successivamente un semplice programma 
per verificare la correttezza della funzione scritta.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Funzione per l'elevamento a potenza intera
double potenza(double base, int esp) { // passo base ed esponente

    double p = 1; // potenza 
    int i;

    // partendo da 0 finche' i < esponente (incremento i)
    for (i = 0; i < esp; i++)
        // moltiplico il valore attuale della potenza per la base
        p = p * base;

    return p; // ritorna il valore della potenza
}

//Funzione per il calcolo del fattoriale
int fattoriale(int n) { // passo il numero

    int f = 1, i; // fattoriale e contatore

    // partendo da 1 finche' i <= n (incremento i)
    for (i = 1; i <= n; i++)
        // moltiplico il valore attuale del fattoriale
        // per il valore attuale del contatore
        f = f * i;

    return f; // ritorna il valore del fattoriale
}

//Funzione per il calcolo del seno di x
//con lo sviluppo in serie di Taylor
//arrestato al termine n-esimo
double sen(double x, int n) { // passo l'angolo ed il termine n-esimo
    
    double s = 0; // seno
    int i;

    // partendo da 0 finche' i < n (incremento i)
    for (i = 0; i < n; i++) // (rappresenta bene una sommatoria)
        // ricostruisco la formula del testo
        // usando le funzioni seno e fattoriale definite sopra
        s += potenza(-1,i)/fattoriale(2*i+1)*potenza(x,2*i+1);

    return s; // ritorna il valore del seno
}

int main() {

    double x; // angolo in radianti
    int n; // n-esimo termine della serie

    printf("Inserisci il valore di x (in radianti): ");
    scanf("%lf", &x);

    printf("Inserisci il numero di termini della serie: ");
    scanf("%d", &n);

    printf("Il seno di %lf vale %lf\n",x , sen(x,n));

    return 0;
}
