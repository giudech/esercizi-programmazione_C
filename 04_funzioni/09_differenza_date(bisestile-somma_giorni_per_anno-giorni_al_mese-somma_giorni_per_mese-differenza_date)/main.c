/*
 # Differenza tra date
 
 Si scriva una funzione che,
 passate due date come parametri
 nella forma di giorno, mese, anno,
 restituisca la differenza in termini di giorni
 tra la prima e la seconda
 (il valore sarà positivo
 se la prima data è posteriore alla seconda,
 negativo viceversa).
 
 Si suggerisce di definire altre funzioni
 per recuperare il numero dei giorni contenuti in un mese
 e per sapere se un anno è bisestile.
 Si ricorda che un anno è bisestile
 se è un multiplo di 4,
 tranne nei casi in cui sia multiplo di 100
 ma non di 400.
 
 Si scriva successivamente un semplice programma
 per verificare la correttezza della funzione scritta.
 
 */

#include <stdio.h>
#include <stdlib.h>

// verifico se e' un anno bisestile
int bisestile(int anno) {
    // se e' divisibile per 400
    if (anno % 400 == 0)
        return 1; // e' bisestile
    // se e' divisibile per 100
    if (anno % 100 == 0)
        return 0; // NON e' bisestile
    // se e' divisibile per 4
    if (anno % 4 == 0)
        return 1; // e' bisestile
    
    return 0; // negli altri casi NON e' bisestile
}

// calcola quanti giorni ci sono dall'anno 1900 all'anno cercato
int somma_giorni_per_anno(int anno) {
    
    int giorni = 0, i;
    
    // partendo da 1900, finche' non arrivo all'anno scelto
    for (i = 1900; i < anno; i++)
        // sommo i giorni in un anno
        // +1 se bisestile
        giorni += 365 + bisestile(i);
        // (incremento i)
    
    return giorni; // restituisce il n° di giorni
    
}

// "calcola" il n° di giorni a seconda del mese
int giorni_al_mese(int mese, int anno) {
    
    // 30 giorni ha novembre con april giugno e settembre
    if (mese == 11 || mese == 4 || mese == 6 || mese == 9)
        return 30;
    
    // di 28 ce n'è uno (febbraio)
    if (mese == 2)
        return 28 + bisestile(anno); // (29 se bisestile)
    
    // tutti gli altri ne han 31
    return 31;
}

// calcola quanti giorni ci sono da gennaio al mese cercato
int somma_giorni_per_mese(int mese, int anno) {
    
    int giorni = 0, i;
    
    // partendo da 1, finche' non arrivo al mese scelto
    for (i = 1; i < mese; i++)
        // sommo i giorni a seconda del mese
        giorni += giorni_al_mese(i,anno);
        // (incremento i)
    
    return giorni;
}

// calcola la differenza tra data 1 e data 2
int differenza_date(int giorno1,int mese1,int anno1,int giorno2,int mese2,int anno2) {
    
    
    int totale_data1, totale_data2;
    
    // il totale dei giorni della data1
    totale_data1 = somma_giorni_per_anno(anno1) + somma_giorni_per_mese(mese1,anno1) + giorno1;
    
    // il totale dei giorni della data2
    totale_data2 = somma_giorni_per_anno(anno2) + somma_giorni_per_mese(mese2,anno2) + giorno2;
    
    return totale_data1 - totale_data2;
}

int main() {
    
    //Solo 3 esempi per verificare la correttezza della funzione
    printf("%d\n", differenza_date(31,10,2017,16,6,2010)); //2694
    printf("%d\n", differenza_date(31,10,2017,16,6,2017)); //137
    printf("%d\n", differenza_date(31,10,2017,1,1,1900));  //43037
    
    return 0;
    
}
