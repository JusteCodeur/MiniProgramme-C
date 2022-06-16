#include "nombre.h"
#include <stdio.h>
#include <stdlib.h>

// int addition(int a, int b);
// int soustraction(int a, int b);
// int multiplication(int a, int b);
// int division(int a, int b);

int main(void)
{
    int numMenu=0, a=0, b=0, resultat=0;
    
    do
    {
        system("cls");

        printf("_____MENU_____\n");
        printf("1. Addition de deux nombres \n2. Soustraction de deux nombres \n3. Multiplication de deux nombres \n4. Division de deux nombres \n5. QUITTER\n\n");
        printf("Choisissez le nombre correspondant a votre operation:   ");
        scanf("%d", &numMenu);

        if(numMenu == 5)
            exit(-1);

        printf("Entrer le premier nombre:   ");
        scanf("%d", &a);
        printf("Entrer le second nombre:   ");
        scanf("%d", &b);
    } while (a>1000 || b>1000 || a<-1000 || b<-1000);

    switch (numMenu)
    {
        case 1: 
            printf("%d", addition(a, b));
            break;
        case 2: 
           printf("%d",  soustraction(a, b));
            break;
        case 3: 
            printf("%d", multiplication(a, b));
            break;
        case 4: 
            printf("%d", division(a, b));
            break;
        case 5:
            break;
        default:
            printf("Mauvaise option\n");
            break;
    }

    return 0;
}

// int addition(int a, int b)
// {
//     return (a + b);
// }

// int soustraction(int a, int b)
// {
//     return (a - b);
// }

// int multiplication(int a, int b)
// {
//     return (a * b);
// }

// int division(int a, int b)
// {
//     while(b==0)
//     {
//         system("cls");
//         printf("Entrer le premier nombre:   ");
//         scanf("%d", &a);
//         printf("Entrer le second nombre:   ");
//         scanf("%d", &b);
//     }
    
//     return (a / b);
// }