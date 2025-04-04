#include <stdio.h>
#include <math.h>

int main() {
    // Déclaration du rayon
    double rayon = 5.0; // tu peux changer cette valeur

    // Déclaration des variables pour aire et périmètre
    double aire = M_PI * rayon * rayon;
    double perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("Pour un cercle de rayon %.2f :\n", rayon);
    printf("Aire = %.2f\n", aire);
    printf("Périmètre = %.2f\n", perimetre);

    return 0;
}
