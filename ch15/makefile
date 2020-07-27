CC = g++

all: main1 main2

Pic.o: Pic.cpp Pic.h

main2.o: main2.cpp Pic.h

main2: main2.o Pic.o

main1.o: main1.cpp Pic.h

main1: main1.o Pic.o

test: all
	./main1
	./main2

.cpp.o:
	g++ -I../ch14 -c -o $@ $<

.PHONY: clean
clean:
	rm -rf *.o main1 main2