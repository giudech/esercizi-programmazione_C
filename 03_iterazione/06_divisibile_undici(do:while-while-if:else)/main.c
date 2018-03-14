/* # Criterio di divisibilità per 11
 
 Dato un numero intero positivo N,
 stabilire se è divisibile per 11
 utilizzando il criterio di divisibilità
 e non l'operatore modulo (%).
 
 Il criterio di divisibilità per 11
 dice che un numero è divisibile per 11
 se la differenza tra la somma
 delle cifre di posto pari e
 la somma di quelle di posto dispari è 0
 o un multiplo di 11.
 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int N;
    int somma_pari, somma_dispari;
    int flag;
    
    printf("Verifica della divisibilità per 11 di un intero, "
           "con il criterio di divisibilità\n");
    
    // richiesta input
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &N);
    // es. N = 1397
    
    do{// esegui
        
        // l'assegnameto delle variabili
        somma_pari = 0;
        somma_dispari = 0;
        flag = 1; // prima cifra in posizione dispari
        
        // finche' N è positivo
        while (N > 0) { // inizio while
            
            //Viene estratta la cifra meno significativa
            int temp = N / 10; //es. temp = 139 ( 1397 / 10 )
            int cifra = N - temp * 10; // es. cifra = 7 ( 1397 - 139 * 10 )
            
            //Viene sommata alternativamente a una somma e all'altra
            if (flag == 1) { // se la cifra corrente e' di posizione dispari
                // sommo la cifra corrente alle altre cifre di posizione dispari
                somma_dispari = somma_dispari + cifra;
                flag = 0; // cambio il flag
                //printf("somma dispari = %d flag = %d \n",somma_dispari, flag); // stampa extra
            }
            else { // altrimenti se la cifra corrente NON e' di posizione dispari
                // sommo la cifra corrente alle cifre di posizione pari
                somma_pari = somma_pari + cifra;
                flag = 1; // cambio il flag
                //printf("somma pari = %d flag = %d \n",somma_pari, flag); // stampa extra
            }
            //Viene eliminata l'ultima cifra da N
            N = N / 10;
        } // fine while
        
        //N viene sostituito con il modulo della differenza tra le due somme
        //Se non è minore di 11 si reitera il procedimento
        N = abs(somma_dispari - somma_pari);
        
    }while(N > 10); // fine do / while finchè N >= 11
    
    if (N == 0) // se la somma e' zero
        printf("Divisibile\n");
    else // se la somma e' diversa da zero
        printf("Non divisibile\n");
    
    return 0;
}