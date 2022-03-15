#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "variables.h"


void pedir_nombre()
{
    // Ingreso de nombre y apellido de los jugadors
    flag = 1;
    puts("Ingresa el nombre del 1er jugador");
    scanf("%s", nombre1);
    puts("Ingresa el apellido del 1er jugador");
    scanf("%s", apellido1);
    puts("Ingresa el nombre del 2do jugador");
    scanf("%s", nombre2);
    puts("Ingresa el apellido del 2do jugador");
    scanf("%s", apellido2);
    printf("%s", nombre1);
    system("cls");
    // --------------------------------
}