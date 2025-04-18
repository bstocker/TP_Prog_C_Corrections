#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Fonction pour afficher un tableau
void afficher_tableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// Fonction pour chercher un entier dans le tableau
int chercher(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return 1; // trouvé
        }
    }
    return 0; // non trouvé
}

int main() {
    int tableau[TAILLE];
    int a_chercher;

    // Initialisation du générateur aléatoire
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre -100 et 100
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 201 - 100; // [-100, 100]
    }

    // Affichage du tableau
    printf("Tableau :\n");
    afficher_tableau(tableau, TAILLE);

    // Demander à l'utilisateur un entier à chercher
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &a_chercher);

    // Chercher l'entier
    if (chercher(tableau, TAILLE, a_chercher)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
