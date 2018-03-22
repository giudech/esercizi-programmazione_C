/*
 # Disegno di rombi
 
 Si scriva un programma che dato in input un intero positivo (lato)
 stampi un rombo utilizzando il simbolo *,
 come mostrato nei seguenti esempi,
 dove N è la lunghezza del lato.
 
 ESEMPI
 
 N = 1
 
 *
 
 N = 3
 
   *
  ***
 *****
  ***
   *
 
 N = 4
 
    *
   ***
  *****
 *******
  *****
   ***
    *
 
 */

#include <stdio.h>

int main() {
    
    int lato; // lunghezza lato del rombo
    int i, j; // contatori
    int asterisco = 1; // numero di asterischi
    int spazio; // numero di spazi
    
    printf("Inserisci la dimensione del lato del rombo: ");
    scanf("%d", &lato);
    
    spazio = lato - 1; // uno spazio lo occupa *
    
    //Disegno della parte superiore del rombo
    
    // finche' i < lato
    for (i = 0; i < lato; i++) {
        
        // finche' j < spazio
        for (j = 0; j < spazio ; j++)
            printf(" "); // stampa gli spazi necessari
        
        // finche' j < asterisco
        for (j = 0; j < asterisco; j++)
            printf("*"); // stampa gli asterischi necessari
        
        // stampa extra
        //printf(" asterisco: %d spazio: %d",asterisco,spazio);

        printf("\n"); // vai a capo
        
        
        // ad ogni livello aggiungo 2 asterischi
        asterisco = asterisco + 2;
        
        // ad ogni livello tolgo 1 spazio
        spazio = spazio - 1;
        
    } // passo al livello successivo in funzione del lato
    
    //Disegno della parte inferiore del rombo
    
    // nella parte superiore ho raggiunto il livello massimo
    spazio = 1; // riparto da 1
    
    // oltre a scendere di un livello -2
    // tolgo il +2 aggiunto dopo l'ultima iterazione del for
    // quindi -4
    asterisco = asterisco - 4;
    
    // finche' i < N - 1
    for (i = 0; i < lato - 1; i++) {
        
        // finche' j < spazio
        for (j = 0; j < spazio ; j++)
            printf(" "); // stampa uno spazio
        
        // finche' j < asterisco
        for (j = 0; j < asterisco; j++)
            printf("*"); // stampa un asterisco
        
        // stampa extra
        //printf(" asterisco: %d spazio: %d",asterisco,spazio);
        
        printf("\n"); // vai a capo
        
        // ad ogni livello tolgo 2 asterischi
        asterisco = asterisco - 2;
        
        // ad ogni livello aggiungo 1 spazio
        spazio = spazio + 1;
        
    } // fine secondo for
    
    return 0;
}
