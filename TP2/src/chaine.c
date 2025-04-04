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
 
    printf("%d\n", Length1);
    printf("%d\n", Length2);
}

