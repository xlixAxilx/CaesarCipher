a.out: main.o caesar.o
	gcc -o a.out main.o caesar.o
main.o: caesar.o caesar.h main.c
	gcc -c caesar.c main.c
caesar.o: caesar.h caesar.c
	gcc -c caesar.c

clean:
	rm *.o

all: a.out clean