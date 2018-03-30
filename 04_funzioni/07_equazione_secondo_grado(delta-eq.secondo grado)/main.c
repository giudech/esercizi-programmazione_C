/*
# Equazione di secondo grado

Si scriva una funzione che permetta di trovare 
le soluzioni reali di un'equazione di secondo grado. 
I valori dei coefficienti a, b e c 
devono essere passati come parametri alla funzione, 
le soluzioni devono essere scritte 
in ulteriori due parametri passati per indirizzo. 
Si suggerisce di scrivere una funzione delta 
per il calcolo del discriminante, 
che possa anche essere utilizzata 
per gestire il caso di soluzioni complesse, 
che non vengono calcolate dalla funzione.

Si ricorda che la formula per il calcolo delle soluzioni 
è la seguente:

[soluzioni equazioni di secondo grado]

        -b +/- √(delta)
x    = -----------------
 1,2          2a

e

[discriminante]

delta = b^2 - 4ac

Si scriva successivamente un semplice programma 
per verificare la correttezza della funzione scritta.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// passo i coefficienti
double delta(double a , double b, double c) {
    
	// restituisce il delta
    return b*b - 4*a*c;
}

// passo i coefficienti ed i riferimenti ad x1 e x2
void secondo_grado(double a , double b, double c, double *x1, double *x2) {
	
	// modifico il valore di x1 con la soluzione positiva
    *x1 = (-b + sqrt(delta(a,b,c)))/(2*a);
    
    // modifico il valore di x2 con la soluzione negativa
    *x2 = (-b - sqrt(delta(a,b,c)))/(2*a);
}

int main() {

    double a, b, c, x1, x2;

    printf("Inserisci i coefficienti a, b e c dell'equazione di secondo grado: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    // se il delta e' < di zero
    if (delta(a, b, c) < 0)
        printf("L'equazione non ha soluzioni nel campo dei reali\n");
    // altriementi
    else {
    	// calcola le soluzioni
        secondo_grado(a,b,c,&x1,&x2);
        // e stampale
        printf("Le soluzioni sono x1: %lf x2: %lf\n", x1, x2);
    }

    return 0;
}
