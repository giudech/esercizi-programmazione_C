/*
 # Calendario dei giorni del mese
 
 Si scriva un programma che dato in input un mese
 (come numero compreso tra 1 e 12) e
 il giorno della settimana del primo di quel mese
 (come numero compreso tra 1 e 7),
 stampi un calendario mensile come nell'esempio seguente.
 
 ## Esempio con mese = 1 e giorno = 4
 
             1   2   3   4
 5   6   7   8   9   10  11
 12  13  14  15  16  17  18
 19  20  21  22  23  24  25
 26  27  28  29  30  31
 
 Filastrocca:
 30 giorni ha novembre, con april, giugno e settembre,
 di 28 ce n'è uno,
 tutti gli altri ne han 31
 
 */

#include <stdio.h>

int main()
{
    int mese, giorni_del_mese, giorno_iniziale;
    int i;
    
    printf("Inserisci il mese: ");
    scanf("%d", &mese);
    
    if (mese == 2) // se febbraio
        giorni_del_mese = 28; // 28 giorni
    else if (mese == 11 || mese == 4 || mese == 6 ||
             mese == 9) // se novembre / aprile / giugno / settembre
        giorni_del_mese = 30; // 30 giorni
    else // tutti gli altri
        giorni_del_mese = 31; // 31 giorni
    
    do {
        printf("-----------------------------\n");
        printf("| L | M | M | G | V | S | D |\n");
        printf("-----------------------------\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("-----------------------------\n");
        printf("Inserisci il giorno iniziale: ");
        scanf("%d", &giorno_iniziale);
    } while (giorno_iniziale > 8);
    
    printf("\n");
    
    // stampa spazi finchè non arriva al giorno iniziale
    for (i = 0; i < giorno_iniziale - 1; i++)
        printf("    ");
    
    // stampa tutti giorni del mese
    for(i = 1; i <= giorni_del_mese; i++)
    {
        printf("%4d",i);
        // se il giorno stampato + l'offset del giorno iniziale e' divisibile per 7 va a capo
        if ((i + giorno_iniziale - 1) % 7 == 0)
            printf("\n");
    }
    printf("\n");
    
    return 0;
}
