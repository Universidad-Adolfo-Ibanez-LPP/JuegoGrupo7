#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "variables.h"


int eleccion_icono()
{
    // Eleccion de icono
    printf("\n1. X\n2. O");
    printf("\n%s %s elija una opcion (Entre 1 y 2): ", nombre1, apellido1);
    scanf("%d", &numero);
    printf("%d\n", numero);
    if (numero == 1)
    {
        printf("a\n");
        int prueba = 1;
        icono = 1;
    }
    else
    {
        printf("b\n");
        int prueba = 2;
        icono = 2;
    }
    return prueba;
    // --------------------------------
}