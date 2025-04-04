#include <stdio.h>
void main() {
  char chaine1 = "Hello";
  int Lenght1 = 0;

  for(int i = 0; i < 1000; i++) {
       if(chaine1[i]=='\0'){
        Lenght1=i;
        break; 
    }
printf("%d",Lenght1);
    
}
