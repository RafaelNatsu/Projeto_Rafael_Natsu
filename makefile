all : main

main: main.o classeA.o classeB.o
	g++ -o main main.o classeA.o classeB.o

main.o: main.cpp classeA.hpp classeB.hpp
	g++ -o main.o main.cpp -c -W -Wall -ansi -pedantic

classeA.o: classeA.cpp classeA.hpp
	g++ -o classeA.o classeA.cpp -c -W -Wall -ansi -pedantic

classeB.o: classeB.cpp classeB.hpp
	g++ -o classeB.o classeB.cpp -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o main