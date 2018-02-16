/*
# Conversione euro-bitcoin

Dato il valore corrente (19/09/2017 10:48) 
del [cambio euro-bitcoin]
(https://www.google.it/search?q=bitcoin+value) 
a 3321.49 (1 bitcoin = 3321.49 euro), 
scrivere un programma C che, 
data in input una certa quantità di euro, 
fornisca in output il numero di bitcoin 
che possono essere acquistati.

*/

// libreria standard necessaria
// per l'input - output
#include <stdio.h>   

// valore costante vale in tutto il progrmma 
// e nelle eventuali funzioni
#define CAMBIO 3321.49  

void stampa_cambio(){
	printf("Il cambio attuale al 19/09/2017 e' di %.3f\n",CAMBIO);
}

int main()
{
    float euro, bitcoin; // dichiarazione variabili
    
    stampa_cambio();
    // stampa richiesta immissione dati
    printf("Inserisci la quantità di euro che vuoi convertire: ");
    scanf("%f", &euro); // acquisizione valore per euro
    
    bitcoin = euro / CAMBIO; // calcolo valore bitcoin
    
    // stampa risultati
    printf("%.3f euro equivalgono a %.4f bitcon\n", euro, bitcoin);
    
    return 0; // termine main
}
