#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int add(int array [], int size);

int main (int argc, char **argv) {

   
   int v[ARRAY_SIZE];
   int addition=0;   
   int i=0;
 
   for (int i=0; i<ARRAY_SIZE; i++){
    v[i] = atoi(argv[1]);
    
   }
   addition = add(v, ARRAY_SIZE);
   printf ("Sum of elements for = %d \n", addition);

  
}

int add(int array [], int size){
    int sum = 0;
     for (int i=0; i<size; i++){
        sum = sum + array[i];
    }
    return sum;
}