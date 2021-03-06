#include <stdio.h>
#include<limits.h>

int main (void){
    unsigned int a = 0;
    unsigned int b = 1;
    unsigned int c = 0;

    /*
    0: 00000000
    1: 00000001
    2: 00000010
    3: 00000011
    4: 00000100
    5: 00000101
    6: 00000110
    7: 00000111
    */

   // Set `c` to 2:
   c = b << 1;

   printf("b left-shifted by 1 is: %i\n", c);

    c = 0;
    c = (b << 2) | b;

    printf("c is now: %i\n", c);

    // The one's compliment operator: ~ (a unary operator)

    c = 0;
    c = ~c;
    printf("one's compliment of 0 is: %u\n", c);
    printf("The maximum size of unsigned int is: %u\n", UINT_MAX);






   return 0;



}