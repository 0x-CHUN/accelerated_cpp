CC = g++
CINCLUDE = -I. -I../ch04

all: split_main main3 analysis

Student_info.o:	../ch04/Student_info.cpp ../ch04/Student_info.h
	$(CC) $(CINCLUDE) -c -o Student_info.o ../ch04/Student_info.cpp

split_main.o: split_main.cpp ../ch05/split.h

split_main:	split_main.o

analysis.o:	../ch06/analysis.cpp ../ch06/analysis.h
	$(CC) $(CINCLUDE) -c -o analysis.o ../ch06/analysis.cpp

grade.o:	../ch06/grade.cpp ../ch06/grade.h
	$(CC) $(CINCLUDE) -c -o grade.o ../ch06/grade.cpp

main3.o:	../ch04/main3.cpp ../ch06/grade.h
	$(CC) $(CINCLUDE) -c -o main3.o ../ch04/main3.cpp

main3: main3.o grade.o analysis.o Student_info.o

analysis: grade.o analysis.o Student_info.o grade_analysis.o grade_check.o

grade_analysis.o: ../ch06/grade_analysis.cpp ../ch06/analysis.h
	$(CC) $(CINCLUDE) -c -o grade_analysis.o ../ch06/grade_analysis.cpp

grade_check.o:	../ch06/grade_check.cpp 
	$(CC) $(CINCLUDE) -c -o grade_check.o ../ch06/grade_check.cpp

test: all
	./split_main <split_main.cpp
	./main3 < ../data/single_grade
	./main3 < ../data/grades
	./analysis < ../data/grades

.PHONY: clean
clean:
	rm -f *.o split_main main3 analysis
