/*
 # Scambio di variabili con una funzione
 
 Si scrivano due funzioni,
 la prima che prende due parametri interi per valore
 e la seconda due parametri interi per indirizzo
 e successivamente si scriva un programma
 per dimostrare i diversi effetti
 del passaggio tramite questi due meccanismi.
 
 */

#include <stdio.h>

// creo una copia dei valori delle variabili
void scambio_x_val(int a, int b) {
    //printf("dentro > scambio_x_val() (prima)\na = %d \nb = %d\n",a,b);
    // variabili locali
    int temp = a; // copio il valore di a in temp
    a = b; // copio il valore di b in a
    b = temp; // copio il valore di temp in b
    //printf("dentro > scambio_x_val() (dopo)\na = %d \nb = %d\n",a,b);
}

// con il puntatore posso modificare il valore della variabile a cui si riferisce
void scambio_x_rif(int *a, int *b) {
    //printf("dentro > scambio_x_rif() (prima)\n*a = %d \n*b = %d\n",*a,*b);
    int temp = *a; // riferimento al valore contenuto in a
    *a = *b; // il valore contenuto in b viene copiato in a
    *b = temp; //
    //printf("dentro > scambio_x_rif() (dopo)\n*a = %d \n*b = %d\n",*a,*b);
}

int main() {
    
    int a = 7, b = 5;
    printf("Valori iniziali, a = %d, b = %d\n", a, b);
    
    //Qua non avviene nulla, passaggio per valore
    scambio_x_val(a, b); // passo il valore attuale delle variabili
    printf("nel main() > dopo scambio_x_val() \na = %d \nb = %d\n", a, b);
    
    //Qua avviene lo scambio, passaggio per indirizzo
    scambio_x_rif(&a, &b); // passo l'indirizzo attuale delle variabili
    printf("nel main() > dopo scambio_x_rif() \na = %d \nb = %d\n", a, b);

    return 0;
    
}