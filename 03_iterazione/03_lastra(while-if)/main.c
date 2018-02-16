/*
# Calcolo del volume massimo di un contenitore metallico

Si supponga di avere un macchinario che, 
data una lastra di metallo di forma rettangolare 
con base b e altezza h, 
tagli un quadrato da ognuno degli spigoli, 
in modo che poi la si possa piegare e 
facendo combaciare i lati così ottenuti 
si possa ottenere un parallelepipedo, 
come si può vedere dalla figura. 
A seconda della dimensione dei lati 
dei quadrati ritagliati (indicati in figura con 1,2 3 e 4) 
il volume risulta diverso, 
si vuole trovare il lato del quadrato 
che permette di massimizzare il volume del parallelepipedo.

*/


#include <stdio.h>

int main()
{
    float larghezza, altezza;
    float volume, volume_massimo = 0, lato_massimo = 0;
    float lato = 0;
    printf("Larghezza e altezza:");
    scanf("%f", &larghezza);
    scanf("%f", &altezza);
    while (lato < altezza / 2)
    {
        volume = (altezza - 2*lato)*(larghezza - 2*lato)*
            lato;
        if (volume > volume_massimo)
        {
            volume_massimo = volume;
            lato_massimo = lato;
        }
        lato = lato + 0.01;
    }
    printf("Il valore del lato per ottenere un volume di %f vale %f",
           volume_massimo, lato_massimo);
    return 0;
}
