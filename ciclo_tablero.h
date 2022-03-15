#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "variables.h"


int ciclo_tablero()
{
    // Ciclo del tablero
    char marca;
    do
    {
        dibujar_tablero();
        jugador = (jugador % 2 == 1) ? 1 : 2;

        if (jugador == 1)
        {
            if (alternador == 1)
            {
                printf("%s %s, Ingrese un numero:  ", nombre1, apellido1);
                scanf("%d", &eleccion);
            }
            else
            {
                printf("%s %s, Ingrese un numero:  ", nombre2, apellido2);
                scanf("%d", &eleccion);
            }
        }
        else
        {
            if (alternador == 1)
            {
                printf("%s %s, Ingrese un numero:  ", nombre1, apellido1);
                scanf("%d", &eleccion);
            }
            else
            {
                printf("%s %s, Ingrese un numero:  ", nombre2, apellido2);
                scanf("%d", &eleccion);
            }
        }

        marca = (jugador == 1) ? 'X' : 'O';

        if (eleccion == 1 && tablero[1] == '1')
        {

            tablero[1] = marca;
        }

        else if (eleccion == 2 && tablero[2] == '2')
        {

            tablero[2] = marca;
        }

        else if (eleccion == 3 && tablero[3] == '3')
        {

            tablero[3] = marca;
        }

        else if (eleccion == 4 && tablero[4] == '4')
        {

            tablero[4] = marca;
        }

        else if (eleccion == 5 && tablero[5] == '5')
        {

            tablero[5] = marca;
        }

        else if (eleccion == 6 && tablero[6] == '6')
        {

            tablero[6] = marca;
        }

        else if (eleccion == 7 && tablero[7] == '7')
        {

            tablero[7] = marca;
        }

        else if (eleccion == 8 && tablero[8] == '8')
        {

            tablero[8] = marca;
        }

        else if (eleccion == 9 && tablero[9] == '9')
        {

            tablero[9] = marca;
        }

        else
        {
            printf("Movimiento invalido ");
            if (alternador == 1)
            {
                alternador = 2;
            }
            else
            {
                alternador = 1;
            }
            jugador = jugador - 1;
            getch();
        }

        if (alternador == 1)
        {
            alternador = 2;
        }
        else
        {
            alternador = 1;
        }

        i = ganador();

        jugador = jugador + 1;
    } while (i == -1);

    return i;
    // --------------------------------
}