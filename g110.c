/*Prema is fascinated by number conversions and wants to build a program to convert decimal numbers to octal numbers. She needs your help to write the program using recursion.



Write a program to help Prema convert a given decimal number to its octal representation.



Example



Input:

200

Output:

310

Explanation:

If the decimal number 200 has to be converted to octal,

200 / 8 = 25, remainder = 0

25 / 8 = 3, remainder = 1

3 / 8 = 0, remainder = 3

The equivalent octal number of the decimal number 200 is 310.



Function Specifications: int decimalToOctal(int decimal);

Input format :
The input consists of an integer, 'decimal', representing the decimal number that Prema wants to convert to octal.

Output format :
The output prints a single integer, which represents the octal representation of the given decimal number.

*/

#include <stdio.h>

int decimalToOctal(int decimal);

int main()
{
    int decimal;
    scanf("%d", &decimal);
    printf("%d", decimalToOctal(decimal));
    return 0;
}

int decimalToOctal(int decimal)
{
    if (decimal == 0)
        return 0;
    else
        return (decimal % 8) + 10 * decimalToOctal(decimal / 8);
}
