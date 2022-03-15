#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "variables.h"


int ganador()
{
    if (tablero[1] == tablero[2] && tablero[2] == tablero[3])
    {

        return 1;
    }

    else if (tablero[4] == tablero[5] && tablero[5] == tablero[6])
    {

        return 1;
    }

    else if (tablero[7] == tablero[8] && tablero[8] == tablero[9])
    {

        return 1;
    }

    else if (tablero[1] == tablero[4] && tablero[4] == tablero[7])
    {

        return 1;
    }

    else if (tablero[2] == tablero[5] && tablero[5] == tablero[8])
    {

        return 1;
    }

    else if (tablero[3] == tablero[6] && tablero[6] == tablero[9])
    {

        return 1;
    }

    else if (tablero[1] == tablero[5] && tablero[5] == tablero[9])
    {

        return 1;
    }

    else if (tablero[3] == tablero[5] && tablero[5] == tablero[7])
    {

        return 1;
    }

    else if (tablero[1] != '1' && tablero[2] != '2' && tablero[3] != '3' && tablero[4] != '4' && tablero[5] != '5' && tablero[6] != '6' && tablero[7] != '7' && tablero[8] != '8' && tablero[9] != '9')
    {

        return 0;
    }
    else
    {

        return -1;
    }
}