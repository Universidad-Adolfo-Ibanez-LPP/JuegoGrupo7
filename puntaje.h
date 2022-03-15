#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "variables.h"

void puntaje()
{
    // Calculo del puntaje
    if (i == 1)
    {
        tablero[1] = '1';
        tablero[2] = '2';
        tablero[3] = '3';
        tablero[4] = '4';
        tablero[5] = '5';
        tablero[6] = '6';
        tablero[7] = '7';
        tablero[8] = '8';
        tablero[9] = '9';
        if (jugador == 2)
        {
            if (icono == 1)
            {
                printf("==>\a%s %s win ", nombre1, apellido1);
            }
            else
            {
                printf("==>\a%s %s win ", nombre2, apellido2);
            }
        }
        else
        {
            if (icono == 2)
            {
                printf("==>\a%s %s win ", nombre1, apellido1);
            }
            else
            {
                printf("==>\a%s %s win ", nombre2, apellido2);
            }
        }
        if (jugador == 2)
        {
            jugador2Score++;
        }
        else
        {
            jugador1Score++;
        }
        // --------------------------------
    };
}