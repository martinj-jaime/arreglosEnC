#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"
#include "prototypes.h"

/// Funciones Extras

/// Ejercicio 1
int cargarDatos(int arr[], int dimension)
{
    int validos=0;
    char op = 's';
    while(validos < dimension && op == 's')
    {
        printf("Ingrese un dato: \n");
        scanf("%i", &arr[validos]);
        printf("Desea cargar otro numero? [s/n] \n");
        fflush(stdin);
        scanf("%c", &op);
        validos++;
    }
    return validos;
}

/// Ejercicio 2
void mostrarDatos(int arr[], int validos)
{
    int i;
    printf("\n");
    for(i=0;i<validos;i++)
    {
        printf(" %i |", arr[i]);
    }
    printf("\n");
}

/// Ejercicio 3
int sumarValidos(int arr[], int validos)
{
    int i, suma=0;
    for(i=0;i<validos;i++)
    {
        suma+=arr[i];
    }

    return suma;
}

/// Ejercicio 4
void copiarEnPila(int arr[], int validos, Pila * pi)
{
    int i;
    for(i=0;i<validos;i++)
    {
       apilar(pi, arr[i]);
    }

    printf("Pila pi: \n");
    mostrar(pi);
}

/// Ejercicio 5
int cargarDatosFloat(float arr[], int dimension)
{
    int validos=0;
    char op = 's';
    while(validos < dimension && op == 's')
    {
        printf("Ingrese un dato: \n");
        scanf("%f", &arr[validos]);
        printf("Desea cargar otro numero? [s/n] \n");
        fflush(stdin);
        scanf("%c", &op);
        validos++;
    }
    return validos;
}

void mostrarDatosFloat(float arr[], int validos)
{
    int i;
    printf("\n");
    for(i=0;i<validos;i++)
    {
        printf(" %0.2f | ", arr[i]);
    }
    printf("\n");
}

float sumarValidosFloat(float arr[], int validos)
{
    int i;
    float suma = 0;
    for(i=0;i<validos;i++)
    {
        suma+=arr[i];
    }

    return suma;
}

/// Ejercicio 6
int cargarString(char arr[], int dimension)
{
    int validos=0;
    printf("Escriba una palabra: [max %i letras] \n", dimension);
    fflush(stdin);
    gets(arr);

    validos = strlen(arr);

    return validos;
}

int seEncuentraEnString(char palabra[], char aBuscar, int validos)
{
    int i, encontrado=0;
    for(i=0;i<validos;i++)
    {
        if(aBuscar==palabra[i])
        {
            encontrado=1;
            break;
        }
        printf("%c \n", palabra[i]);
    }
    return encontrado;
}

/// Ejercicio 7
int insertarOrdenAlph(char palabra[], char letra, int validos)
{
    int ult = validos-1;

    while(ult>0 && letra<palabra[ult])
    {
        palabra[ult+1]=palabra[ult];
        ult--;
    }

    palabra[ult+1]=letra;

    return validos+1;
}

/// Ejercicio 8
char obtenerMayorChar(char palabra[], int validos)
{
    int i=0;
    char mayor = palabra[i];

    for(i=1;i<validos;i++)
    {
        if(palabra[i]>mayor)
        {
            mayor=palabra[i];
        }
    }

    return mayor;
}

/// Ejercicio 9
int esCapicua(int arr[], int validos)
{
    int i, j=1, capicua=1;
    for(i=0;i<validos/2;i++)
    {
        if(arr[i]!=arr[validos-j])
        {
            capicua=0;
        }
        j++;
    }

    return capicua;
}

/// Ejercicio 10
void invertir(int arr[], int validos)
{
    // sin utilizar un arreglo auxiliar
    int i=0, j=1, aux=0;
    for(i=0;i<validos/2;i++)
    {
        aux=arr[i];
        arr[i]=arr[validos-j];
        arr[validos-j]=aux;

        j++;
    }
}

/// Ejercicio 11
void ordenarElemento(char arr[], int i)
{
    char aux;
    int j=i;
    aux=arr[i];

    while((j>0) && (aux<arr[j-1]))
    {
        arr[j]=arr[j-1];
        j--;
    }
    arr[j]=aux;
}

void ordenarInsercion(char arr[], int validos)
{
    int i;

    for(i=0; i<validos; i++)
    {
        ordenarElemento(arr, i);
    }
}

int encontrarMenor(char arr[], int validos, int i)
{
    int j, posMenor=i;

    for(j=i+1; j<validos; j++)
    {
        if(arr[j]<arr[posMenor])
        {
            posMenor=j;
        }
    }

    return posMenor;
}

void ordenarSeleccion(char arr[], int validos)
{
    int i, posMenor=0;
    char aux;
    for(i=0;i<validos-1;i++)
    {
        posMenor = encontrarMenor(arr, validos, i);
        aux=arr[i];
        arr[i]=arr[posMenor];
        arr[posMenor]=aux;
    }
}

/// Ejercicio 12
void nuevoArrOrdenadoAlph(char arr1[], char arr2[], char nuevoArr[])
{
    nuevoArr=strcat(arr1, arr2);
    printf("Nueva cadena: %s \n", nuevoArr);

    int validos = strlen(nuevoArr);

    ordenarSeleccion(nuevoArr, validos);

    printf("Nueva cadena ordenada: %s \n", nuevoArr);
}

/// Ejercicio 13
void sumaAnteriores(int arr[], int nuevoArr[], int validos)
{
    int i, j, suma=0;

    for(i=0;i<validos;i++)
    {
        j=i;
        while(j>=0)
        {
            suma+=arr[j];
            j--;
        }
        nuevoArr[i]=suma;
        suma=0;
    }
}



