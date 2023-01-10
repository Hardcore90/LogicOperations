#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
    int pin1, pin2;
    printf("pin1= ");
    scanf("%i", &pin1);
    printf("pin2= ");
    scanf("%i", &pin2);

    if (((pin1 == 1234) && (pin2 == 4321)) || ((pin1 == 6789) && (pin2 == 9876)))
    {
        printf("Wellcome!");
    }
    else
    {
        printf("Incorrect pin! Try Again!");
    }
}
