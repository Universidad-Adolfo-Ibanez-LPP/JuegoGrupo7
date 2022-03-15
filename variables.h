#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char tablero[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int numero;
int alternador;
int icono;
int jugador;
int prueba;
int flag = 0;
int opcion;
int eleccion_jugador;
int jugador = 1, i, eleccion;
int ganador();
void dibujar_tablero();

char nombre1[20], apellido1[20], nombre2[20], apellido2[20];
char x[1];

int jugador1Score = 0;
int jugador2Score = 0;
