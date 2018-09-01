#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int opcion;
    char respuesta;

    do
    {
        printf("\n MENU OPCIONES");
        printf("\n 1- Calcular la suma (A+B)");
        printf("\n 2- Calcular la resta (A-B)");
        printf("\n 3- Calcular la multiplicacion (A*B)");
        printf("\n 4- Calcular la division (A/B)");
        printf("\n 5- Calcular el factorial");

        printf("Desea continuar utilizando la calculadora?");
        Scanf("%c",&respuesta);

    }
    while (respuesta = 's');


    return 0;
}
