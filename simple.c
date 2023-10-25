/*
Bucle que recorre un espacio de datos
lee vector de enteros positivos
*/

#include <stdio.h>
#include <stdlib.h>
#define TAMV(v) sizeof(v) / sizeof(v[0])

int main()
{
    // vector de enteros positivos
    int v[] = {11, 22, 33, 44}; // 4
    // int v[] = {11};   // 1
    // int v[] = {};     // 0

    // if tam 0 digo 0 y acabo
    // if tam 1 imprimo y digo 1 y acabo
    // if tam N imprimo.. y digo N y acabo

    if (TAMV(v) == 0)
    {
        printf("vacio\n");
        exit(0);
    }

    int i;
    for (i = 0; i < TAMV(v); i++)
    {
        printf(" dato: %d\n", v[i]);
    }
    printf("habia: %d\n", i);

    exit(0);
}
