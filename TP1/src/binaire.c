#include <stdio.h>

void afficherBinaire(unsigned int n) {
    int bitTrouvé = 0;

    for (int i = 32 - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;

        if (bit == 1) {
            bitTrouvé = 1; // on a trouvé un bit
        }

        if (bitTrouvé) {
            printf("%d", bit);
        }
    }

    if (!bitTrouvé) {
        printf("0");
    }

    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Décimal : %u → Binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
