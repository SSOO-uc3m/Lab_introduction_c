#include <stdio.h>
#include <stdlib.h>


float add (float a, float b);  // add prototype

int main (int argc, char **argv) {   

   float n1, n2, suma;
   
    n1 = atof(argv[1]);
    n2 = atof(argv[2]);

    addition = add(n1, n2); 
  
    printf ("Sum = %.3f \n", addition);
  
   
}

// All parameters are passed by value except arrays that are passed by reference automatically

float add (float a, float b){ // add definition

 return(a+b);
 
}