/*
 # Maggiori della media
 
 Scrivere un programma che, dati in input N numeri reali,
 con N che al massimo vale 100,
 stampi quanti di essi sono maggiori della media
 e successivamente li stampi a video
 
 */

#include <stdio.h>

#define D_MAX 100

int main() {
    
    float v[D_MAX], media = 0;
    
    int N, i, conta = 0;
    
    printf("Quanti valori vuoi inserire? ");
    scanf("%d", &N);
    
    // riempio gli el. del vettore con reali inseriti da tastiera
    for (i = 0; i < N; i++) {
        printf("%d) ", i+1);
        scanf("%f", &v[i]);
        media += v[i]; // sommo ogni el. inserito
    }
    
    media = media / N; // ricavo la media
    
    // scorro gli el. del vettore in cerca di el. > della media
    for (i = 0; i < N; i++)
        if (v[i] > media) // se ne trovo uno
            conta++; // ne tengo conto
    
    printf("La media vale : %.2f\n", media);

    printf("Ci sono %d elementi maggiori della media, ", conta);
    printf("questi sono:\n");

    // scorro gli el. del vettore per torvate tutti gli el. > media
    for (i = 0; i < N; i++)
        if (v[i] > media) // se ne trovo uno
            printf("%.2f\n", v[i]); // stampo l'elemento
    
    return 0;
    
}
