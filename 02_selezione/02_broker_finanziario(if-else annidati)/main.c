/*
 # Commissioni di un broker finanziario
 
 Un broker quando esegue delle transazioni
 (ad esempio acquisto/vendita di azioni),
 riceve una commissione in base all'importo
 della transazione effettuata secondo la seguente tabella:
 
 | Transazione             | Commissione   |
 |-------------------------|---------------|
 |Fino a 2500 €            | 30 € + 1.7%   |
 |Da 2500 € fino a 6250 €  | 56 € + 0.66%  |
 |Da 6250 € fino a 20000 € | 76 € + 0.34%  |
 |Oltre i 20000 €          | 100 € + 0.22% |
 
 Inoltre la tariffa minima è di 39 €.
 
 Si scriva un programma che dato l'importo di una transazione
 calcoli la commissione dovuta al broker.
 */

#include <stdio.h>

int main()
{
    float transazione, commissione; // dichiarazione variabili
    
    // richiesta inserimento dati
    printf("Inserisci il valore della transazione: ");
    scanf("%f", &transazione); // acquisizione transazione
    
    if (transazione < 2500) // primo caso transazione < 2500
    {
        commissione = 30.0 + transazione*1.7/100; // calcolo commissione
    }
    else if (transazione < 6250) // casi successivi con if else annidati
    {
        commissione = 56.0 + transazione*0.66/100;
    }
    else if (transazione < 20000)
    {
        commissione = 76.0 + transazione*0.34/100;
    }
    else
    {
        commissione = 100.0 + transazione*0.22/100;
    }
    if (commissione < 39) // caso transazione minima
        commissione = 39; // assegnamento commissione minima
    
    // risultati
    printf("La commissione corrisponde a una transazione di %.2f euro varrà %.2f euro\n",
           transazione, commissione);
    
    return 0;
}
