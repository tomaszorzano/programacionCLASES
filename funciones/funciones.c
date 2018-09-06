#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/** \brief Suma de dos numeros flotantes.
    \param Valor asignado a variable "a".
    \param valor asignado a variable "b".
    \return Devuelve el resultado de la suma de las dos variables.
*/
float funcion_Suma(float a, float b );

float funcion_Suma(float a, float b)

{
    float resSuma;
    resSuma= a + b;
    return resSuma;
};

/** \brief Resta de dos numeros flotant
    \param Valor asignado a variable "a".
    \param Valor asignado a variable "b".
    \return Devuelve el resultado de la resta de las dos variables.
*/
float funcion_Resta(float a,float b);

float funcion_Resta(float a,float b)
{
    float resResta;
    resResta= a - b;
    return resResta;

};


/** \brief Multiplicacion de dos numeros flotantes.
    \param Valor asignado a variable "a".
    \param Valor asignado a variable "b".
    \return Devuelve el resultado de la multiplicacion de las dos variables.
*/

float funcion_Multiplicacion(float a,float b);

float funcion_Multiplicacion(float a,float b)
{
    float resMultiplicacion;
    resMultiplicacion= a * b;
    return resMultiplicacion;

};


/** \brief Division de dos numeros flotantes
    \param Valor asignado a variable "a".
    \param Valor asignado a variable "b".
    \return Devuelve el resultado de la division de las dos variables.
*/
float funcion_Division(float a,float b);

float funcion_Division(float a,float b)
{
    float resDivision;

    if(b ==0)
    {

        return -1;

    }
    else
    {
        resDivision=a/b;
        return resDivision;
    }


};


/** \brief Factoriza un numero entero
    \param Valor asignado a variable "a".
    \return Devuelve el resultado de la factorial de la variable.
*/

int funcion_Factorial(int a);

int funcion_Factorial(int a)
{
    int valor;
    if(a==0)
    {
        return 1;
    }
    valor=a*funcion_Factorial(a-1);
    return valor;
};




/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float funcion_getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int funcion_getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char funcion_getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
};











