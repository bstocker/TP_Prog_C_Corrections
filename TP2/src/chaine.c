#include <stdio.h>

int main() {
    char chaine1[] = "Hello";
    int Length1 = 0;

    for (int i = 0; i < 1000; i++) {
        if (chaine1[i] == '\0') { 
            Length1 = i;
            break; 
        }
    }

    printf("%d", Length1);

    return 0;
}

