all: main

main: src/main.c
	gcc -o ./bin/a.out ./src/main.c

clean:
	rm bin/*
