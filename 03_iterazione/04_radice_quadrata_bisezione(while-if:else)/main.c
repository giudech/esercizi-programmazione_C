/*
 # Calcolo della radice quadrata per bisezione

Dato un numero positivo N,
calcolare la sua radice quadrata
(ovvero trovare l'insieme delle x tali che x^2 = N)
con il [metodo di bisezione]
avendo come dati il numero N
e la precisione con la quale si vuole calcolare la radice.
 
(per interi > 1 la bisezione consiste nel porsi all'interno
 di due estremi all'interno dei quali la radice sara' compresa
 e calcolarne il punto medio.
 Se il punto medio appartiene all'intervallo x^2 = N,
 allora è la radice.
 Altrimenti uno dei nuovi estremi sarà il punto medio,
 mentre l'altro sara' il piu' grande o il piu' piccolo
 a seconda se il punto medio al quadrato è piu' piccolo o
 piu' grande di N)

*/

#include <stdio.h>

int main() {
    
    float N; // numero immesso
    float a, b, medio = 0; // estremi e punto medio
    float epsilon = 0.001; // precisione
    
    do {
        // inserimento dati con controllo
        printf("Inserisci un numero positivo: ");
        scanf("%f", &N);
        if (N < 0) {
            printf("ho detto positivo\n");
        }
    } while (N < 0);
    
    a = 0; // estremo inferiore
    b = N; // estremo superiore
    
    // finche' la differenza tra gli estremi dell'intervallo
    // e' > di epsilon
    while(b - a > epsilon) {
        
        medio = (a + b)/2; // medio = alla media tra gli estremi
        
        /*printf("%.3f\n",medio); // stampa di verifica*/
        
        // se il quadrato di medio e' > N
        if( medio*medio > N)
            b = medio; // medio e' l'estremo superiore
        else // altrimenti
            a = medio; // medio e' l'estremo inferiore
    } // verifico di nuovo la condizione
    
    printf("La radice di %.3f vale %.3f\n",N, medio);
    
    return 0;
}
