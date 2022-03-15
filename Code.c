#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "puntaje.h"


int main()
{

    system("Color B");

    int jugador = 1, i, eleccion;

    if (flag == 0)
    {
        pedir_nombre();
        eleccion_jugador = eleccion_icono();
    }

    jugador = eleccion_jugador;

    alternador = icono;

    ciclo_tablero();

    jugador = jugador - 1;
    dibujar_tablero();

    puntaje();

    printf("\n==>\ajugador %s %s score:  %d\n", nombre1, apellido1, jugador1Score);
    printf("==>\ajugador %s %s score:  %d\n", nombre2, apellido2, jugador2Score);
    printf("Oprime 1 para volver a jugar o 2 para salir: \n");
    scanf("%d", &opcion);
    if (opcion == 2)
    {
        if (jugador2Score < jugador1Score)
        {
            printf("Ha ganado el jugador %s %s con %d puntos", nombre1, apellido1, jugador1Score);
        }
        if (jugador2Score > jugador1Score)
        {
            printf("Ha ganado el jugador %s %s con %d puntos", nombre2, apellido2, jugador2Score);
        }
        if (jugador2Score == jugador1Score)
        {
            printf("La partida ha terminado en empate");
        }
    }
    else
    {
        main();
    }

    return 0;
}