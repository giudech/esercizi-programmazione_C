/*
 # Energia meccanica
 
 Si scriva un programma che calcoli e stampi i valori di
 energia cinetica ed energia potenziale in funzione del tempo
 di un punto materiale di massa m, soggetto alla forza di gravità mg.
 
 Si ricorda la formula dell'energia cinetica K = ½mv^2
 e quella potenziale U = mgh.
 Come input devono essere forniti i valori di
 massa m,
 velocità iniziale v0,
 altezza iniziale h0,
 tempo t.
 
 Si ricorda inoltre che in presenza di accelerazione g,
 la velocità vale v(t) = v0 - gt
 e l'altezza del punto vale h(t) = h0 + v0t - ½gt^2.
 
 Si controlli inoltre che, dati i valori di tempo e altezza iniziale,
 il punto non si trovi in una posizione negativa rispetto all'origine
 del sistema di riferimento.
 Nel caso ciò si verifichi, il programma deve stampare
 in che momento il punto ha toccato terra e con quale energia cinetica.

 */

#include <stdio.h>

#define g 9.81 // la costante gravitazionale

int main()
{
    // dichiarazione variabili
    float m, v0, h0, t;
    float e_potenziale, e_cinetica;
    float v, h;
    
    printf("Calcolo di energia cinetica e potenziale di un punto dotato di massa in caduta libera.\n");
    
    // inserimento dati
    printf("Inserisci i dati:\n");
    printf("massa(kg) -> ");
    scanf("%f", &m);
    printf("v0(m/s) -> ");
    scanf("%f", &v0);
    printf("h0(m) -> ");
    scanf("%f", &h0);
    printf("t(s) -> ");
    scanf("%f", &t);
    
    v = v0 - g*t; // calcolo della velocita'
    
    e_cinetica = 0.5*m*v*v; // energia cinetica
    
    h = h0 + v0*t - 0.5 * g * t * t; // altezza del punto
    
    e_potenziale = m*g*h; // energia potenziale
    
    if (h > 0)
    {
        printf("Energia cinetica: %f joules\nEnergia potenziale %f joules\n",
               e_cinetica, e_potenziale);
    }
    else
    {
        // nuova variabile per tempo di volo
        float tempo_di_volo;
        
        //Soluzione dell'equazione di secondo grado dove h(t) vale 0
        //Viene presa solo la soluzione positiva
        tempo_di_volo = (- v0 + sqrt(v0*v0 + 4*h0*0.5*g))/(2*0.5*g);
        
        v = v0 - g*tempo_di_volo;
        
        e_cinetica = 0.5*m*v*v;
        
        printf("Il punto ha toccato terra all'istante %.2f secondi con un'energia cinetica di %f joules\n",
               tempo_di_volo, e_cinetica);
    }
    
    return 0;
}
