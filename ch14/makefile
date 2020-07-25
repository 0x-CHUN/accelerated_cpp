CC = g++

target = std_main1 std_main2 std_main3 urls_main

all: $(target)

std_main1:	std_main1.o Student_info.o Core.o grade.o read_hw.o

std_main1.o: std_main1.cpp Student_info.h Handle.h

std_main2:	std_main2.o Student_info.o Core.o grade.o read_hw.o

std_main2.o: std_main2.cpp Student_info.h Ref_handle.h

std_main3: std_main3.o Student_info.o Core.o grade.o read_hw.o

std_main3.o: std_main3.cpp Student_info.h Ptr.h

Core.o:	Core.cpp Core.h

Student_info.o:	Student_info.cpp Core.h Student_info.h

grade.o: grade.cpp Student_info.h
	g++ -I../ch08 -c -o grade.o grade.cpp

read_hw.o: read_hw.cpp

urls_main:	urls_main.o urls.o Vec_clone.o Str.o

urls_main.o: urls_main.cpp urls.h Vec.h Str.h

urls.o:	urls.cpp urls.h Vec.h Str.h

Vec_clone.o: Vec_clone.cpp Vec.h

Str.o: Str.cpp Str.h

test: all
	./std_main1 <../data/mixed_grades
	./std_main2 <../data/mixed_grades
	./std_main3 <../data/mixed_grades
	./urls_main <../data/urls.htm

.PHONY: clean
clean:
	rm -rf *.o $(target)