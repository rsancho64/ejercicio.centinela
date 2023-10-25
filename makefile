all: solucion.c simple.c solucion2.c
	gcc solucion.c -o solucion.exe
	gcc simple.c -o   simple.exe	
	gcc solucion2.c -o solucion2.exe

clean:
	rm -rf *.o *.exe a.out
