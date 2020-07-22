CC = g++
CINCLUDE = -I. -I../ch04 -I../ch08

all: grading_prog

Student_info.o: Student_info.cpp Student_info.h

grade.o: grade.cpp ../ch08/median.h Student_info.h
	g++ -I../ch08 -c -o grade.o grade.cpp

grading_prog.o: grading_prog.cpp ../ch04/grade.h ../ch08/median.h Student_info.h

grading_prog: grading_prog.o grade.o Student_info.o

test: all
	./grading_prog <../data/grades

.PHONY: clean
clean:
	rm -rf *.o grading_prog

.cpp.o:
	g++ $(CINCLUDE) -c -o $@ $< 