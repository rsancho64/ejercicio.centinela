main
main:: 
	v[10] = {11,22,33,44,55,66,77,88,99};     // 1
	v[10] = {11,22,33,44,END,66,77,88,99};    // 2
	v[10] = {END,22,33,44,55,66,77,88,99};    // 3
	v[10] = {11,22,33,44,55,66,77,88,99,END}; // 4	
	v[10] = {11,END};                         // 5

*programar un bucle que lea el vector y escriba los datos validos y diga cuantos son*
ejemplos

1: { 11, 22, 33, 44, 55, 66, 77,88, 99, } son 9 
2: { 11, 22, 33, 44, } son 4
3: son 0
4: { 11, 22, 33, 44, 55, 66, 77,88, 99, } son 9 
5: { 11, } son 1
