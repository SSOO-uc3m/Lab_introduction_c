#include <stdio.h>

int main () {
        int integer = 0;
        float decimal = 0.0;
        char * string;        
        
        
        printf("write an integer  d \n\n");
        scanf("%d",&integer);
    	printf("'%5d' \n", integer);  //At least five wide	'   10'
     	printf("'%-5d'\n", integer); //At least five-wide, left-justified	'10   '
        printf("'%05d'\n", integer); 	// At least five-wide, zero-filled'00010'
        printf("'%+5d'\n", integer); // At least five-wide, with a plus sign	'  +10'
        printf("'%-+5d'\n", integer);  //Five-wide, plus sign, left-justified 	'+10  '
        
        printf("\n write float formats f \n\n");
        scanf("%f",&decimal);
    	printf("'%.1f'\n", decimal); // Print one position after the decimal 	'10.3'
        printf("'%.2f'\n", decimal); 	// Two positions after the decimal '10.35'
        printf("'%8.2f'\n", decimal); // Eight-wide, two positions after the decimal 	'   10.35'
        printf("'%8.4f'\n", decimal); //Eight-wide, four positions after the decimal 	' 10.3456'
        printf("'%08.2f'\n", decimal); //Eight-wide, two positions after the decimal, zero-filled 	'00010.35'
        printf("'%-8.2f'\n", decimal); //Eight-wide, two positions after the decimal, left-justified 	'10.35   '
        printf("'%-8.2f'\n", 101234567.3456); //Printing a much larger number with that same format 	'101234567.35'

        printf("\n write an string formats \n\n");
        
        scanf("%s",string);
       	printf("'%s' \n", string); // A simple string 	'Hello'
        printf("'%10s' \n", string); // A string with a minimum length 	'     Hello'
        printf("'%-10s' \n", string); // Minimum length, left-justified	'Hello     '
        
        printf("\nspecial characters\n\n");
        
        printf("Hello\tworld \n"); 	//  Insert a tab character in a string 	printf Hello world
        printf("Hello\nworld \n"); 	// Insert a newline character in a string Hello world
        printf("Hello world\n"); // Typical use of the newline character 	Hello world
        printf("C:\\Windows\\System32\\ \n"); // A DOS/Windows path with backslash characters 	C:\Windows\System32\
        

}
