all: cmd
cmd: comandos.o main.o
	gcc -o cmd comandos.o main.o
comandos.o: comandos.c comandos.h 
	gcc -o comandos.o -c comandos.c
main.o: main.c comandos.h
	gcc -o main.o -c main.c

clean:
	rm -rf *.o
