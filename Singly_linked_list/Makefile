compile: exec
CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -ansi -g3
SORCES=*.c
OBJECTS=*.o
mylib.a:$(OBJECTS)
	ar -cvq mylib.a $(OBJECTS)
exec:$(SORCES) mylib.a
	$(CC) $(CFLAGS) -o exec $(SORCES) mylib.a
backup:
	tar -cf prog.tar.gz $(SORCES) header.h Makefile
clean:
	rm -rf *.o *.c~ exec mylib.a
