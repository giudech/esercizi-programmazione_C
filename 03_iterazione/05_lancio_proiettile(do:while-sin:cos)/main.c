/*
 # Lancio di un proiettile

Utilizzando le formule che descrivono la traiettoria di un proiettile
dato l'angolo alfa e la velocità iniziale v0,
stampare la posizione del proiettile
in termini delle sue coordinate x e y,
da quando parte a quando tocca terra,
a intervalli di 0.1 secondi.
 
Si supponga che il punto di lancio si trovi nelle coordinate (0,0)
del sistema di riferimento e che sia posizionato a terra
(quindi h0 = 0).
 
[Traiettoria di un proiettile]

Si ricorda che lungo l'asse parallelo al piano di lancio
la velocità e' costante, mentre lungo l'asse perpendicolare
il moto e' uniformemente accelerato con accelerazione -g.
 
La formula che interessa il moto uniformemente accelerato e':
h(t) = h0 + v0t - 0.5gt^2,
con h altezza del proiettile da terra.
                                
Si ricorda infine che la velocità iniziale v0
deve essere scomposta nelle due componenti,
parallela e perpendicolare al terreno,
utilizzando le note relazioni che utilizzano il seno e il coseno.
 
*/

#include <stdio.h>
#include <math.h>

#define g 9.81

int main() {
    
    float v0, alfa; // velocita' ed angolo di lancio iniziale
    float x = 0, y = 0; // posizione iniziale (0,0)
    float v0x, v0y; // velocita' iniziale orizzontale e verticale
    float t = 0.1; // intervallo di tempo t
    
    // inserimento dati
    printf("Inserisci\n> velocità iniziale [m/s]: ");
    scanf("%f", &v0);
    printf("> angolo [rad]: ");
    scanf("%f", &alfa);
    
    // calcolo le componenti della velocita' iniziale
    v0x = v0 * cos(alfa); // componente orizzontale
    v0y = v0 * sin(alfa); // componente verticale
    
    // eseguo
    do {
        
        // la stampa della posizione all'istante t
        printf("x: %f, y: %f\n",x,y);
        x = v0x*t; // calcolo x velocita' costante
        y = v0y*t - 0.5*g*t*t; // moto accelerato
        t = t + 0.1; // incremento t
        
    } while (y > 0); // finche' y e' positiva 
                     //il proiettile non tocca terra
    
    return 0;
    
}
