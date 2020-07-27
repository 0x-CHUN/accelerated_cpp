CC = g++

all: histo

histo: histo.o Pic.o Core.o Student_info.o read_hw.o grade.o

histo.o: histo.cpp Pic.h Core.h median.h

Pic.o: Pic.cpp Pic.h

Core.o: Core.cpp Core.h

Grad.o:	Grad.cpp Core.h

Student_info.o: Student_info.cpp median.h Student_info.h Core.h

grade.o: grade.cpp median.h Student_info.h

read_hw.o: read_hw.cpp median.h Student_info.h

test: all
	./histo <../data/kids_grades

.PHONY: clean
clean:
	rm -rf *.o histo