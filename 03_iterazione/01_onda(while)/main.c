/*
# Propagazione di un'onda

Si scriva un programma che, 
dato in input l'altezza in metri di un'onda, 
calcoli a quale distanza l'onda scompare, 
considerando che l'altezza dell'onda 
si riduce del 10% ogni chilometro e che 
si può considerare scomparsa 
quando l'altezza è inferiore a 1 cm.

*/

#include <stdio.h>

int main()
{
    float altezza_iniziale;
    int km = 0;
    printf("Inserisci l'altezza:");
    scanf("%f", &altezza_iniziale);
    while (altezza_iniziale > 0.01){
        altezza_iniziale = altezza_iniziale * 0.9;
        km++;
        }
    printf("L'onda si propaga per %d kilometri", km);
    return 0;
}
