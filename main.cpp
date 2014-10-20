#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    //Agregamos al return las variables "a" y "b" para devolver una suma de ambas.
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    //Agregamos al return las variables "a" y "b" para devolver una resta de ambas.
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    //Agregamos al return las variables "a" y "b" para devolver una multiplicación de ambas.
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    //Agregamos al return las variables "a" y "b" para devolver una división de ambas.
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    // Agregamos un ciclo IF Anidado para resolver cuales de las variables "a" o "b" son mayores
    // y devolvemos la variable mayor.
    if (a>b)
    {
        return a;
    } else if (a<b)
    {
        return b;
    } else
    {
        return -1;
    }

}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    // Agregamos un ciclo IF Anidado para resolver cuales de las variables "a" o "b" es el menor
    // y devolvemos la variable menor.
    if (a<b)
    {
        return a;
    } else if (a>b)
    {
        return b;
    } else
    {
        return -1;
    }
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    // Agregamos un ciclo IF Anidado para resolver cuales de las variables "a", "b" o "c" es la mayor
    // y devolveremos la variable Mayor
    if (a>b && a>c)
    {
        return a;
    } else if (b>a && b>c)
    {
        return b;
    } else if (c>a && c>b)
    {
        return c;
    } else
    {
        return -1;
    }
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    //Asignamos el valor a un arreglo dependiendo de la posición del arreglo.
    arreglo[posicion]=valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    //Devolvemos el valor que contiene el arreglo por cada posición.
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    //Creamos una variable "mayor" tipo arreglo.
    int mayor = arreglo[0];
    //Definimos un FOR para recorrer el arreglo dado el tamaño.
    for (int i=0;i<tamano;i++)
    {
        //Agregamos un IF para encontrar el numero mayor.
        if(mayor<arreglo[i])
        {
            //Al encontrar el numero meyor lo asignamos a la variable "mayor"
            mayor=arreglo[i];
        }
    }
    //Devolvemos la variable "mayor"
    return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    //Creamos una variable "menor" tipo arreglo.
    int menor = arreglo[0];
    //Definimos un FOR para recorrer el arreglo dado el tamaño.
    for (int i=0;i<tamano;i++)
    {
        //Agregamos un IF para encontrar el numero menor.
        if(menor>arreglo[i])
        {
            //Al encontrar el numero meyor lo asignamos a la variable "mayor"
            menor=arreglo[i];
        }
    }
    //Devolvemos la variable "mayor"
    return menor;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    //Creamos una variable "suma" asignandole valor cero(0).
    int suma=0;
    //Definimos un FOR para recorrer el arreglo dado el tamaño.
    for (int i=0;i<tamano;i++)
    {
        //Sumamos todos los valores del arreglo.
        suma += arreglo[i];
    }
    // creamos una varible tipo int llamada "promedio" para calcular el promedio de los numeros.
    int promedio = suma/tamano;
    //Devolvemos el promedio de los numeros.
    return promedio;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
