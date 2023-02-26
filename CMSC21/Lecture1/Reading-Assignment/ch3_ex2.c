#include <stdio.h>

int main()
{
    int i;
    float x;

    //Variables and given values to be printed
    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); 
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
   
    /*format strings contain ordinary character (|) and conversion specifications 
    that will print the values of variable i and x in various formats:
    %m.pX or %-m.pX (presence of minus(-) sign forces left justification)
    m - minimum field width (minimum amount of characters displayed)
    p - precision (dependent on conversion specifier)
    X - conversion specifier 
        %d - displays value in decimal form
        %f - displays value in fixed decimal form
        %e - displays value as a floating point number in exponential format
        &g - displays floating-point number in either exponential format or fixed decimal format depending on the number's size */

}