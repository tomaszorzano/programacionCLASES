
#include "funciones.h"
#include "alquileres.h"
#include "categoria.h"
#include "cliente.h"
#include "juego.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int funcion_opcionesJuegos()
{
    int opcionIngresada;
    char auxOpcion[5];


    system("cls");
    printf("\n******* MENU DE OPCIONES ******* \n\n");
    printf(" 1- ALTA juego\n");
    printf(" 2- MODIFICAR DATOS DE UN JUEGO\n");
    printf(" 3- BAJA DEL JUEGO\n");
    printf(" 4- NUEVA CATEGORIA\n");
    printf(" 5- ELIMINAR CATEGORIA\n");
    printf(" 6- LISTAR\n");
    printf(" 7- SALIR\n");
    while(!funcion_getStringNumeros("Ingrese una opcion del 1-7 : ",auxOpcion))
    {
        printf("ERROR- La opcion tiene que ser solo numeros del 1 al 7\n\n");

        system("pause");
    }

    opcionIngresada=atoi(auxOpcion);


    return opcionIngresada;
}

void funcion_InicializarjUEGOS(eJuegos list[], int tam)
{

    for(int i=0; i < tam; i++)
    {

        list[i].isEmpty = 1;

    }

}
void funcion_Juegos(eJuegos list)
{

    printf("\nCODIGO:%S - DESCRIPCION:%s - IMPORTE:%s  - DIRECTOR:%s\n\n", list.codigo, list.descripcion, list.importe, list.categoria.nombre);
}
