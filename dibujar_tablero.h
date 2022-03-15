#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "variables.h"


void dibujar_tablero()
{
    system("cls");
    printf("\n\n\tGato\n\n");

    if (icono == 1)
    {
        printf("%s %s(X)  -  %s %s(O)\n\n\n", nombre1, apellido1, nombre2, apellido2);
    }
    else
    {
        printf("%s %s(X)  -  %s %s(O)\n\n\n", nombre2, apellido2, nombre1, apellido1);
    }

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", tablero[1], tablero[2], tablero[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", tablero[4], tablero[5], tablero[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", tablero[7], tablero[8], tablero[9]);

    printf("     |     |     \n\n");
}