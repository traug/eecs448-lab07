Program: main.o testClass.o
	g++ -g -std=c++11 main.o testClass.o -o Lab7

main.o: main.cpp Node.h Node.hpp LinkedList.h LinkedList.hpp testClass.h
	g++ -g -std=c++11 -c main.cpp

testClass.o:	testClass.h testClass.cpp
		g++ -g -std=c++11 -c testClass.cpp

clean:
	rm *.o Lab7
