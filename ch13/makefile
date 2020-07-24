CC = g++

all: main_core main_grad main_orig main_core_ptrs

Core.o:	Core.cpp Core.h

Grad.o:	Grad.cpp Core.h

Student_info.o:	Student_info.cpp ../ch08/median.h Student_info.h Core.h

grade.o: grade.cpp ../ch08/median.h Student_info.h

read_hw.o: read_hw.cpp ../ch08/median.h Student_info.h

main_core.o: main_core.cpp Core.h ../ch08/median.h

main_grad.o: main_grad.cpp Core.h ../ch08/median.h

main_orig.o: main_orig.cpp Core.h ../ch08/median.h Student_info.h

main_core_ptrs.o: main_core_ptrs.cpp Core.h ../ch08/median.h

main_orig:	main_orig.o grade.o Student_info.o read_hw.o Core.o

main_core:	main_core.o grade.o  read_hw.o Core.o

main_grad:	main_grad.o grade.o  read_hw.o Core.o

main_core_ptrs:	main_core_ptrs.o grade.o  read_hw.o Core.o

test: all
	./main_core <../data/grades_core
	./main_grad <../data/grades_grad
	./main_orig <../data/mixed_grades
	./main_core_ptrs <../data/mixed_grades

.cpp.o:
	g++ -I. -I../ch08 -c -o $@ $<

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf main_core main_grad main_orig main_core_ptrs