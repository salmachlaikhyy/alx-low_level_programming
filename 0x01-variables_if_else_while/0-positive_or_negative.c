#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point
* This program will assign a random number to the variablen
* Complete the source code in order to print whether the 
* Return: 0
*/
int main(void)
{
 int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if  (n > 0)
    printf("%d is positive\n", n);
else    if (n == 0)
            printf("%d is zero\n", n);
        else
            printf("%d is negative\n", n);

    return (0);
}
