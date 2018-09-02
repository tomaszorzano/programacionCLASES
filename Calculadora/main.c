#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int opcion;
    char respuesta;
    float a;
    float b;

    do
    {
        printf("\n MENU OPCIONES");
        printf("\n 1- Calcular la suma (A+B)");
        printf("\n 2- Calcular la resta (A-B)");
        printf("\n 3- Calcular la multiplicacion (A*B)");
        printf("\n 4- Calcular la division (A/B)");
        printf("\n 5- Calcular el factorial");

        // VALORES DE A Y B

        printf("\nIngrese un numero: ");
        scanf("%f",&a);
        printf("\nIngrese otro numero: ");
        scanf("%f",&b);
        // ELEGIR OPCION 1-5

        printf("Eliga una opcion ");
        fflush(stdin);
        scanf("%d",opcion);

        switch(opcion)
        {

        }




        printf("\nDesea continuar utilizando la calculadora?");
        scanf("%c",&respuesta);

    }
    while (respuesta = 's');


    return 0;
}
