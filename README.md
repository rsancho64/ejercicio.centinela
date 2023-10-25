# centinela

## Bucles que recorren un espacio de datos con centinelas

```C
#define END -1
main:: 
// vector de enteros positivos
v[] = {11,22,33,44,55,66,77,88,99};     // 10
v[] = {11,22,33,44,END,66,77,88,99};    // 4
v[] = {END,22,33,44,55,66,77,88,99};    // 0
v[] = {11,22,33,44,55,66,77,88,99,END}; // 10 
v[] = {11,END};                         // 1
v[] = {END};                            // 0
v[] = {};                               // 0
```

*programar un bucle que lea el vector y escriba los datos validos y diga cuantos son*
ejemplos

// TODO:
- 1: `{ 11, 22, 33, 44, 55, 66, 77,88, 99, } son 9`
- 2: `{ 11, 22, 33, 44, } son 4`
- 3: `son 0`
- 4: `{ 11, 22, 33, 44, 55, 66, 77,88, 99, } son 9`
- 5: `{ 11, } son 1`

## pensamiento algoritmico

datos:
    tienen signficados
        ...
    tienen una representacion:
       ...

pascal, N.Wirth
        algoritmos + ee.dd = programas

## pensando en pseudocodigo nuestro problema

V0
Recorro el vector desde el comienzo hasta su final (fisico o logico) y voy contando lo que me encuentro y lo voy imprimiendo
Al final, digo cuanto he contado

V1
Recorro el vector:
si el tam es 0 digo cuenta: 0
// aserto: tam no es 0
**recorro el resto hasta su final** (fisico o logico) y 
    voy contando lo que me encuentro y
    lo voy imprimiendo
digo cuenta: X

V2
Recorro el vector:
si el tam es 0 digo cuenta: 0
// aserto: tam no es 0
mientras (no **estoy-en-el-final**) (fisico o logico) y 
    voy contando lo que me encuentro y
    lo voy imprimiendo
digo cuenta: X

V3
Recorro el vector:
si el tam es 0 digo cuenta: 0
// aserto: tam no es 0
mientras (no **enFinal**) (fisico o logico) y 
    voy contando lo que me encuentro y
    lo voy imprimiendo
digo cuenta: X


V4
defino FALSO 0
Recorro el vector:
si el tam es 0 digo cuenta: 0
// aserto: tam no es 0
enFinal = FALSO
mientras (no **enFinal** ni fisico ni logico) y 
    voy contando lo que me encuentro y
    lo voy imprimiendo
digo cuenta: X


V4
#define FALSO 0
Recorro el vector:
if (TAMV(v) == 0)
    printf("cuenta: 0");  // digo cuenta: 0
int enFinal = FALSO;
while ( ! (**enFinal** ni fisico ni logico)) y 
    contador++ // voy contando lo que me encuentro y
    printf("%d, ", dato); // lo voy imprimiendo
printf("cuenta: %d", X);  // digo cuenta: X


V5
#define END -1
#define FALSO 0
if (TAMV(v) == 0)
    printf("cuenta: 0");  // digo cuenta: 0
int enFinal = FALSO;
int i = 0;
while ( ! (**enFinal** ni fisico ni logico)) y 
    contador++ // voy contando lo que me encuentro y
    printf("%d, ", dato); // lo voy imprimiendo
    if (TAMV(v) == i) enFINAL = TRUE // fin fisico
    if (actual == END) enFINAL = TRUE // fin logico
    i++;
printf("cuenta: %d", X);  // digo cuenta: X









