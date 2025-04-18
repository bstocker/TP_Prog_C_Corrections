#include <stdio.h>
#include <stdint.h>  // pour uintptr_t

int main() {
  // Déclaration des variables
    char i = 'A';
    
  // Déclaration des pointeurs (un pointeur pointe sur une addresse &i)
    char *pi = &i;
   
  // Affichage avant manipulation
    printf("Avant manipulation :\n");
    printf("Adresse de i  : %p, Valeur : %c\n", (void*)pi, i);
   
  // Manipulation via pointeurs
    *pi = 'B';

  // Affichage après manipulation
    printf("\nAprès manipulation :\n");
    printf("Adresse de i  : %p, Valeur : 0x%02X\n", (void*)pi, (unsigned char)*pi);

    return 0;
}
