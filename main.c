#include <stdio.h>
#include <stdlib.h>
//1
float aplicarAumento(float precioProducto);

//2
int reemplazarCaracteres(char cadena[], char a, char b);

//3

typedef struct{
    int id;
    char nombre[20];
    char tipo;
    float efectividad;
}eVacuna;

int ordenarPorTipo(eVacuna vacuna[], int tam);

//1
float aplicarAumento(float precioProducto)
{
    float precioConAumento = (precioProducto + (precioProducto * 5 / 100));

    return precioConAumento;
}

//2
int reemplazarCaracteres(char cadena[], char a, char b)
{
    int cantidadVeces;
    char aux;
    int longitud = strlen(cadena);
    int i;
    for (i = 0; i < strlen(cadena) / 2; i++)
    {
        char temporal = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = temporal;
        if(cadena[i] == 'a')
        {
            aux = a;
            b = a;
            b = aux;

            cantidadVeces ++;
        }
    }
    return printf("2): La cantidad de veces fue: %d\n", cantidadVeces);
}

//3
int ordenarPorTipo(eVacuna vacuna[], int tam)
{
}

int main()
{
    //1
    float precio = 5;
    printf("1) %.2f", aplicarAumento(precio));

    printf("\n\n");

    //2
    char cadena[] = "Hola";
    char primerChar = 'a';
    char segundoChar = 'b';

    reemplazarCaracteres(cadena, primerChar, segundoChar);


    return 0;
}
