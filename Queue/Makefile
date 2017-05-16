compile:exec
CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -ansi -g3
SORCES=*.c
OBJECTS=*.o
libfile.a:$(OBJECTS)
	ar -cvq libfile.a $(OBJECTS)
exec:$(SORCES) libfile.a
	$(CC) $(CFLAGS) -o exec $(SORCES) libfile.a
clean:
	rm -rf *.o libfile.a exec libfile.a

