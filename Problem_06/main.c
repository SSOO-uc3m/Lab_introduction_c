#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {

   int v[10];
   int addition=0;   
   int i=0;
 
   for (i=0; i<10; i++){
    v[i] = atoi(argv[1]);
    
   }

   // for loop
   for (int i=0; i<10; i++){
    addition = addition + v[i];
   }
   
   printf ("Sum of elements for = %d \n", addition);

     
   addition=0;
   
   // while loop
   while (i<10){
   addition = addition + v[i];
        i++;
   }
   printf ("Sum of elements while = %d \n", addition);
}
