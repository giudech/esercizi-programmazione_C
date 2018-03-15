/*
 # Coefficiente binomiale
 
 Si scriva un programma che dati in input
 due valori interi positivi n e k
 calcoli il coefficiente binomiale
 utilizzando la seguente formula:
 
 [coefficiente binomiale]
 
  (n)                   n!
 (   ) = C(n;k) = -------------   n e k naturali; 0 <= k <= n
  (k)              k! (n - k)!
 
 */

#include <stdio.h>

int main() {
    
    // f_n = fattoriale di n | f_k = fattoriale di k | f_n_k = fattoriale di n - k
    int n, k, f_n = 1, f_k = 1, f_n_k = 1, i;
    
    printf("Inserisci n e k: ");
    scanf("%d", &n);
    scanf("%d", &k);
    
    //Primo modo (un for per ogni fattoriale - easy way)
    /*
    for (i = 1; i<= n; i++)
    f_n = f_n * i;
     
    for (i = 1; i<= k; i++)
    f_k = f_k * i;
     
    for (i = 1; i<= n - k; i++)
    f_n_k = f_n_k * i;
    */
    
    //Secondo modo (un fattoriale con salvataggio furbo dei valori - smart way)
    int fattoriale = 1;
    
    for (i = 1; i<= n; i++) {
        
        fattoriale = fattoriale * i;
        
        if (i == k) // quando i == k
            f_k = fattoriale;
        if (i == n - k) // quando i == n - k
            f_n_k = fattoriale;
        if (i == n) // quando i == n
            f_n = fattoriale;
        
    }
    
    printf("Il coefficiente binomiale vale: %d\n",f_n/(f_k*f_n_k));
    
    return 0;
}