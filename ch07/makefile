all: wc xref grammar

CC = g++
CINCLUDE = -I../ch06 -I../ch05
obj = $(patsubst %.cpp, %.o,$(wildcard ./*.cpp))

split.o: ../ch06/split.cpp ../ch05/split.h
	g++ $(CINCLUDE) -c -o split.o ../ch06/split.cpp

wc.o: wc.cpp

wc: wc.o

xref.o: xref.cpp ../ch05/split.h

xref: xref.o split.o

grammar.o: grammar.cpp ../ch05/split.h

grammar: grammar.o split.o

.cpp.o:
	g++ -I../ch06 -I../ch05 -c -o $@ $<

test: all
	./wc < wc.cpp
	./xref < wc.cpp
	./grammar <../data/grammar_input

.PHONY: clean
clean:
	rm -rf $(obj) split.o
	rm -rf $(patsubst %.o, %, $(obj))