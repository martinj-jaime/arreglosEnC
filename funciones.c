#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"
#include "prototypes.h"

void ejercicio1()
{
    int dimension = 21;
    int arr[dimension];

    int validos = cargarDatos(arr, dimension);

    printf("validos: %i \n", validos);
    printf("dimension: %i \n", dimension);
}

void ejercicio2()
{
    int dimension = 21;
    int arr[dimension];

    int validos = cargarDatos(arr, dimension);

    mostrarDatos(arr, validos);
}

void ejercicio3()
{
    int dimension = 31;
    int arr[dimension];

    int validos = cargarDatos(arr, dimension);

    mostrarDatos(arr, validos);

    int suma = sumarValidos(arr, validos);
    printf("La suma de los validos es de: %i", suma);
}

void ejercicio4()
{
    int dimension = 21;
    Pila pi;
    int arr[dimension];

    inicpila(&pi);

    int validos = cargarDatos(arr, dimension);

    mostrarDatos(arr, validos);

    copiarEnPila(arr, validos, &pi);
}

void ejercicio5()
{
    int dimension=101;
    float arr[dimension], suma=0;

    int validos = cargarDatosFloat(arr, dimension);

    mostrarDatosFloat(arr, validos);

    suma = sumarValidosFloat(arr, validos);

    printf("La suma es de: %0.2f \n", suma);
}

void ejercicio6()
{
    int dimension=41, validos;
    char palabra[dimension];
    char aBuscar;

    validos = cargarString(palabra, dimension);
    printf("Palabra: %s \n", palabra);

    printf("Ingrese la letra a buscar: \n");
    fflush(stdin);
    scanf("%c", &aBuscar);

    if(seEncuentraEnString(palabra, aBuscar, validos))
        printf("La letra se encuentra en la palabra \n");
    else
        printf("No se encuentra en la palabra \n");
}

void ejercicio7()
{
    int dimension=41;
    char palabra[dimension], letra;

    printf("INGRESE EN ORDEN ALFABETICO: \n");
    int validos = cargarString(palabra, dimension);

    printf("Ingrese la letra: \n");
    scanf("%c", &letra);

    insertarOrdenAlph(palabra, letra, validos);

    printf("Palabra con la nueva letra: %s \n", palabra);
}

void ejercicio8()
{
    int dimension=31;
    char palabra[dimension];

    int validos = cargarString(palabra, dimension);

    char mayor = obtenerMayorChar(palabra, validos);
    printf("El mayor caracter es el: %c \n", mayor);
}

void ejercicio9()
{
    int dimension=31;
    int arr[dimension];

    int validos = cargarDatos(arr, dimension);

    mostrarDatos(arr, validos);

    if(esCapicua(arr, validos))
    {
        printf("Es capicua \n");
    } else
    {
        printf("No es capicua \n");
    }
}

void ejercicio10()
{
    int dimension=21;
    int arr[dimension];

    int validos = cargarDatos(arr, dimension);

    mostrarDatos(arr, validos);

    invertir(arr, validos);

    mostrarDatos(arr, validos);
}

void ejercicio11()
{
    int dimension=41;
    char arr[dimension];
    char op;

    int validos = cargarString(arr, dimension);

    printf("Palabra: %s \n", arr);

    printf("Ingrese A (insercion) o B (seleccion): \n");
    fflush(stdin);
    scanf("%c", &op);
    switch(op)
    {
    case 'A': ordenarInsercion(arr, validos);
              break;
    case 'B': ordenarSeleccion(arr, validos);
              break;
    default: break;
    }

    printf("Palabra: %s \n", arr);
}

void ejercicio12()
{
    char arr1[]={'A','C','D','F','\0'};
    char arr2[]={'B','E','G','H','\0'};

    printf("%s \n", arr1);
    printf("%s \n", arr2);

    int dimension=5;

    char nuevoArr[dimension];

    nuevoArrOrdenadoAlph(arr1, arr2, nuevoArr);

    // printf("%s \n", nuevoArr);
}

void ejercicio13()
{
    int arr[]={1,5,6,7,8}, validos=5;
    int nuevoArr[5];

    mostrarDatos(arr, validos);

    sumaAnteriores(arr, nuevoArr, validos);

    mostrarDatos(nuevoArr, validos);
}




