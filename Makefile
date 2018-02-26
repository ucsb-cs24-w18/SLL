# Makefile

test: main.o SLL.o
	g++ -g -o test main.o SLL.o

main.o:
	g++ -c -g main.cpp

SLL.o:
	g++ -c -g SLL.cpp

clean:
	rm -f test *.o

