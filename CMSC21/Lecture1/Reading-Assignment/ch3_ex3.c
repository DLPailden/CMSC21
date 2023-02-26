#include <stdio.h>

int main()
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    //format strings that ask user to input 2 fractions to add:
    printf("Enter first fraction: "); 
    scanf("%d/%d", &num1, &denom1); //Fractions should be inputted in this specific format: num/denom ex. 1/3

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);
    
    //formula for adding two fractions
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    
    //format string that displays the result/sum of adding the two fractions inputted:
    printf("The sum is %d/%d\n", result_num, result_denom); //note that the sum isn't simplified

    return 0;
}