all: main maincpp 010-TestCase

main: src/main.c
	gcc -o bin/a.out src/main.c

# from catch2 examples online
010-TestCase: src/010-TestCase.cpp
	g++ -std=c++11 -Wall -Icatch2 -o bin/010-TestCase src/010-TestCase.cpp

maincpp: src/main.cpp
	g++ -std=c++11 -Wall -Icatch2 -o bin/main src/main.cpp

clean:
	rm bin/*


# g++ -std=c++11 -Wall -Icatch2 -o 010-TestCase 010-TestCase.cpp && ./010-TestCase --success 
# g++ -std=c++11 -Wall -Icatch2 main.cpp && ./a.out --success 