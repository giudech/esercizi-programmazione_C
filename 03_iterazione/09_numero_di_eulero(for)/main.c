/*
 # Calcolo del numero e di Eulero
 
 Calcolare il valore del numero e di Eulero,
 utilizzando la definizione tramite
 [la sommatoria che usa i reciproci del fattoriale]
 https://it.wikipedia.org/wiki/E_(costante_matematica)#Definizioni),
 limitandosi al calcolo dei primi N termini,
 con N fornito dall'utente.
 
 */

#include <stdio.h>

int main() {
    
    int N ,  i;
    double fattoriale = 1, e = 1;
    
    printf("Inserisci il numero di termini desiderati: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) { // i = 1 , finche' i <= N calcola il fattoriale
        fattoriale = fattoriale * i; // calcolo del fattoriale
        e = e + 1/fattoriale; // e = sommatoria dei reciprochi del fattoriale
    }
    
    printf("Il valore di e con la serie fermata al %d termine vale %.10lf\n",
           N, e);
    
    return 0;
}
