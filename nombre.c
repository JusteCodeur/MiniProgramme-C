#include "nombre.h"
#include <stdio.h>

int addition(int a, int b)
{
    return (a + b);
}

int soustraction(int a, int b)
{
    return (a - b);
}

int multiplication(int a, int b)
{
    return (a * b);
}

int division(int a, int b)
{
    while(b==0)
    {
        system("cls");
        printf("Entrer le premier nombre:   ");
        scanf("%d", &a);
        printf("Entrer le second nombre:   ");
        scanf("%d", &b);
    }
    return (a / b);
}