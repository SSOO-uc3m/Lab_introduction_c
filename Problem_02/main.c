#include <stdio.h>
#include <string.h>


int main () {

  char  name[10]; // 10 is max length. string included \ 0
  //char * name;// No length defined, it grows dynamically
 

  printf ("Write the name: " );
  scanf("%s",name);
  //fgets(name, 10 , stdin);
  printf ("Hello %s \n", name);
 
}
