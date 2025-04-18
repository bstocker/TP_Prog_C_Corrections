#include <stdio.h>

#define TAILLE 10
#define MAX_LONGUEUR 200

// Fonction pour comparer deux chaînes de caractères sans utiliser strcmp
int comparer_chaine(const char *a, const char *b) {
    while (*a && *b) {
        if (*a != *b) {
            return 0; // caractères différents, chaînes différentes
        }
        a++;
        b++;
    }

    // Si les deux chaînes se terminent en même temps, elles sont égales
    return (*a == '\0' && *b == '\0');
}

int main() {
    // Tableau de phrases
    const char *phrases[TAILLE] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    // Phrase à chercher (saisie utilisateur)
    char recherche[MAX_LONGUEUR];
    int trouve = 0;

    printf("Entrez une phrase à rechercher :\n");
    fgets(recherche, MAX_LONGUEUR, stdin);

    // Supprimer le saut de ligne à la fin si présent
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    // Recherche dans le tableau
    for (int j = 0; j < TAILLE; j++) {
        if (comparer_chaine(phrases[j], recherche)) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("Phrase trouvée.\n");
    } else {
        printf("Phrase non trouvée.\n");
    }

    return 0;
}
