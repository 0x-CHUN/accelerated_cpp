all: urls_main analysis main2 main3


CC = g++

Student_info.o: Student_info.cpp Vec.h Student_info.h

grade.o: grade.cpp Vec.h Student_info.h median.h

urls_main.o: urls.cpp urls.h Vec.h

urls_main: urls_main.o urls.o 

analysis: analysis.o grade.o Student_info.o grade_analysis.o grade_check.o

analysis.o: analysis.cpp Vec.h Student_info.h median.h

grade_analysis.o: grade_analysis.cpp analysis.h

grade_check.o: grade_check.cpp

main2.o: main2.cpp

main3.o: main3.cpp grade.h median.h Student_info.h

main2: main2.o

main3: main3.o grade.o Student_info.o

test: all
	./urls_main < ../data/urls.htm
	./analysis < ../data/grades
	./main2 < ../data/single_grade
	./main2 < ../data/grades
	./main3 < ../data/grades

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf urls_main analysis main2 main3