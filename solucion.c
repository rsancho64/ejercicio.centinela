/*

Bucles que recorren un espacio de datos con centinelas

Bucle que lee vector de enteros positivos terminado
logicamente con un centinela (entero negativo)

*/

#include <stdio.h>
#define END -1
#define TAMV(v) sizeof(v) / sizeof(v[0])

int main()
{
    // vector de enteros positivos
    // int v[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99}; // 1
    // int v[10] = {11, 22, 33, 44, END, 66, 77, 88, 99}; // 2
    // int v[10] = {END, 22, 33, 44, 55, 66, 77, 88, 99};     // 3
    // int v[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, END}; // ok
    // int v[10] = {11, END};   // ok
    // int v[10] = {END};  // ok
    int v[10] = {}; // ??

    int i = 0;
    if (TAMV(v) != 0)
    {
        for (; v[i] != END; i++)
        {
            printf("%d, ", v[i]);
        }
    }
    printf("han sido %d", i);
}
