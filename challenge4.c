#include <stdio.h>
int main() {
    float vitesse_kmh;
    float vitesse_ms;
    //demende de le utilisateure de saisir la vitesse en kilomètres par heure
    printf("enter la vitesse en kilometres par heur: ");
    scanf("%f", &vitesse_kmh;
    //conversion de kilometres par heure en metres par second
    vitesse_ms = vitesse_kmh * 0.27778;
    //afichage de resultas
    printf("la vitesse en metre par second (m/s)est : %.2f m/s", vitesse_ms);
    return 0 ;
}

