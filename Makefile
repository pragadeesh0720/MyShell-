CC=gcc
CFLAGS=-Iinclude

all: my_shell

my_shell: src/main.o src/parser.o src/executor.o src/builtins.o
	$(CC) -o my_shell src/main.o src/parser.o src/executor.o src/builtins.o

src/main.o: src/main.c include/parser.h include/executor.h include/builtins.h
	$(CC) -c src/main.c $(CFLAGS) -o src/main.o

src/parser.o: src/parser.c include/parser.h
	$(CC) -c src/parser.c $(CFLAGS) -o src/parser.o

src/executor.o: src/executor.c include/executor.h
	$(CC) -c src/executor.c $(CFLAGS) -o src/executor.o

src/builtins.o: src/builtins.c include/builtins.h
	$(CC) -c src/builtins.c $(CFLAGS) -o src/builtins.o

clean:
	rm -f my_shell src/*.o
