#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"
#include "prototypes.h"

int main()
{
    int op=0;
    do
    {
        system("cls");
        printf("\n_________________________________\n");
        printf("Ingrese un ejercicio: [1-13] \n");
        printf("[0 finaliza] \n");
        printf("_________________________________\n");
        scanf("%i", &op);
        switch(op)
        {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        case 4:
            ejercicio4();
            break;
        case 5:
            ejercicio5();
            break;
        case 6:
            ejercicio6();
            break;
        case 7:
            ejercicio7();
            break;
        case 8:
            ejercicio8();
            break;
        case 9:
            ejercicio9();
            break;
        case 10:
            ejercicio10();
            break;
        case 11:
            ejercicio11();
            break;
        case 12:
            ejercicio12();
            break;
        case 13:
            ejercicio13();
            break;
        default:
            break;
        }

        getch();
    }
    while(op!=0);

    getch();
    return 0;
}
