CC = g++

all: urls_main analysis main2 main3

Str.o: Str.h Str.cpp ../ch11/Vec.h

Student_info.o: Student_info.cpp ../ch11/Vec.h Str.h Student_info.h

grade.o: grade.cpp ../ch11/Vec.h Str.h Student_info.h ../ch11/median.h

urls_main.o: urls_main.cpp urls.h ../ch11/Vec.h Str.h

urls.o:	urls.cpp urls.h ../ch11/Vec.h Str.h

urls_main:	urls_main.o urls.o Str.o

analysis:	analysis.o grade.o Student_info.o grade_analysis.o grade_check.o Str.o

analysis.o:	analysis.cpp ../ch11/Vec.h Str.h Student_info.h ../ch11/median.h

grade_analysis.o: grade_analysis.cpp analysis.h

grade_check.o: grade_check.cpp

main2.o:	main2.cpp

main3.o:	main3.cpp grade.h ../ch11/median.h Student_info.h

main2:	main2.o Str.o

main3:	main3.o grade.o Student_info.o Str.o

test: all
	./urls_main < ../data/urls.htm
	./analysis < ../data/grades
	./main2 < ../data/single_grade
	./main2 < ../data/grades
	./main3 < ../data/grades

.cpp.o:
	g++ -I. -I../ch11 -c -o $@ $<

.PHONY: clean
clean:
	rm -rf *.o
	rm -rf urls_main analysis main2 main3