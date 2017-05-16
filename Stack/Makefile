all:exec
CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -ansi -g3
SORCES=*.c
BOJECTS=*.o
libmylist.a:$(OBJECTS)
	ar -cvq libmylist.a $(OBJECTS)
exec:$(SORCES) libmylist.a
	$(CC) $(CFLAGS) -o exec $(SORCES) libmylist.a
clean:
	rm -rf *.o libmylist.a mainfile exec
