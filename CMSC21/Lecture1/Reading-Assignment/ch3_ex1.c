#include <stdio.h>

int main()
{
    int i, j;
    float x, y;

    //Variables and given values to be printed
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    /*This format string contains ordinary characters & conversion specifications 
    that specifies what type of data the variable contains. And how the values should be displayed/printed. */
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    /* As a result: 
    Ordinary characters are simply copied, and the values are displayed based on their conversion specifications
    i = 10(int value), j = 20(int value), x = 43.289200(float value), y = 5527.000000(float value) */

    return 0;
}