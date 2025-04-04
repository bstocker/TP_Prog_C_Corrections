#include <stdio.h>

void main() {
    char chaine1[] = "Hello";
    char chaine2[] = "World !";
    int Length1 = 0;
    int Length2 = 0;
    
    for (int i = 0; i < 1000; i++) {
        if (chaine1[i] == '\0') { 
            Length1 = i;
            break; 
        }
    }

    for (int i = 0; i < 1000; i++) {
        if (chaine2[i] == '\0') { 
            Length2 = i;
            break; 
        }
    }

    char chaine_finale[Length1+Length2];

    for (int i = 0; i < Length1; i++) {
        chaine_finale[i]=chaine1[i];
        }
    }
    for (int i = Length2; i < (Length1+Length2); i++) {
        chaine_finale[i]=chaine2[i-Length2];
        }
    }
    printf("%s", chaine_finale);
}

