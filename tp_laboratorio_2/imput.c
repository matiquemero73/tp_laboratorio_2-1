#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
#include "imput.h"

/**
* \brief Solicita un n�mero al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getInt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    int aux;

    printf("%s", message);
    scanf("%d", &aux);
    if(aux < lowLimit || aux > hiLimit)
    {
        printf("%s", eMessage);
        return -1;
    }
    else
    {
        *input = aux;
        return 0;
    }

}

/**
* \brief Solicita un n�mero al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getFloat(float* input,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    float aux;

    printf("%s", message);
    scanf("%.2f", &aux);
    if(aux < lowLimit || aux >hiLimit)
    {
        printf("%s",eMessage);
        return -1;
    }
    else
    {
        *input = aux;
        return 0;
    }

}


/**
* \brief Solicita un caracter al usuario y lo valida
* \param input Se carga el caracter ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el caracter [0] si no [-1]
*
*/
int getChar(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)
{
    char aux;

    printf("%s", message);
    aux = toupper(getche());

    if(aux < toupper(lowLimit) || aux > toupper(hiLimit))
    {
        printf("%s", eMessage);
        return -1;
    }
    else
    {
        *input = aux;
        return 0;
    }

}


/**
* \brief Solicita una cadena de caracteres al usuario y la valida
* \param input Se carga el string ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Longitud m�nima de la cadena
* \param hiLimit Longitud m�xima de la cadena
* \return Si obtuvo la cadena [0] si no [-1]
*
*/
int getString(char* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    char aux[50];

    printf("%s", message);
    fflush(stdin);
    gets(aux);
    if(strlen(aux) < lowLimit || strlen(aux)>hiLimit)
    {
        printf("%s", eMessage);
        return -1;
    }
    else
    {
        strcpy(input,aux);
        return 0;
    }
}

/**
* \brief Solicita un n�mero al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getLongInt(long int* input,char message[],char eMessage[], long int lowLimit, long int hiLimit)
{
    long int aux;

    printf("%s", message);
    scanf("%ld", &aux);
    if(aux < lowLimit || aux > hiLimit)
    {
        printf("%s", eMessage);
        return -1;
    }
    else
    {
        *input = aux;
        return 0;
    }

}

/**
* \brief Solicita S o N al usuario y la valida
* \param input Se carga el caracter validado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \return Si obtuvo un caracter valido [0] si no [-1]
*
*/

int getSN(char* input, char message[], char eMessage[])
{
    char aux;
    printf("%s", message);
    aux = toupper(getche());
    if(aux != 'S' && aux != 'N')
    {
        printf("%s", eMessage);
        return -1;
    }
    else
    {
        *input = aux;
        return 1;
    }
}