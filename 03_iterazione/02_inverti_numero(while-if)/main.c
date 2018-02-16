/*
# Inverti numero

Si scriva un programma che, 
dato in input un numero intero positivo N, 
lo stampi al contrario.

### Esempio
1234 verrà stampato come 4321, 1200 come 21.

*/

#include <stdio.h>

int main()
{
    int N, N_inverso = 0;
    
    printf("Inserisci N:");
    scanf("%d", &N);
    
    printf("L'inverso di N e':\n");
    
    // dividendo il numero per 10 il resto corrisponde all'ultima cifra
    // dividendo nuovamente per 10 il resto corrisponde alla penultima cifra
    // ..cosi' via fino alla prima cifra
    while (N > 0) // finche' N e' maggiore di zero
    {
        if (N % 10 != 0) // se il resto della divisione e' diverso da zero
            printf("%d", N % 10); // stampa il resto della divisione ad ogni iterazione
        
        N_inverso = N_inverso * 10 + N % 10; // N_inverso e' uguale 
        // il valore attuale di N_inverso moltiplicato per 10
        // + il resto di N / 10
        
        N = N / 10; // divido N per 10
    }
    
    // stampo il risultato salvato nella variabile
    printf("L'inverso di N e':\n%d", N_inverso); 
    
    return 0;
}
