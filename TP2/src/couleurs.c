#include <stdio.h>

// Définition de la structure RGBA
struct Couleur {
    unsigned char r;  // Rouge
    unsigned char g;  // Vert
    unsigned char b;  // Bleu
    unsigned char a;  // Alpha (opacité)
};

int main() {
    // Tableau de 10 couleurs initialisées en hexadécimal
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x00, 0x00, 0x00, 0x00},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0x00, 0xff},
        {0x80, 0x80, 0x80, 0xff},
        {0xff, 0x80, 0x00, 0xff},
        {0xaa, 0xbb, 0xcc, 0xff}
    };

    // Affichage des 10 couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n\n", couleurs[i].a);
    }

    return 0;
}
