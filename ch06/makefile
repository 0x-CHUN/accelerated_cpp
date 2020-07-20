all: split_main palin urls_main grade_analysis ext_fails1 ext_fails2

CC = g++

obj = $(patsubst %.cpp, %.o,$(wildcard ./*.cpp))

CINCLUDE = -I../ch05 -I../ch04

median.o: ../ch04/median.cpp ../ch04/median.h
	g++ $(CINCLUDE) -c -o median.o ../ch04/median.cpp

Student_info.o: ../ch04/Student_info.cpp ../ch04/Student_info.h
	g++ $(CINCLUDE) -c -o Student_info.o ../ch04/Student_info.cpp

split.o: split.cpp ../ch05/split.h
	g++ $(CINCLUDE) -c -o split.o split.cpp

split_main.o: ../ch05/split_main.cpp ../ch05/split.h
	g++ $(CINCLUDE) -c -o split_main.o ../ch05/split_main.cpp

split_main:	split_main.o split.o

palin.o: palin.cpp

urls.o:	urls.cpp urls.h

urls_main.o: urls_main.cpp urls.h

urls_main: urls_main.o urls.o

grade.o: grade.cpp grade.h

grade_check.o: grade_check.cpp

analysis.o:	analysis.cpp analysis.h

grade_analysis.o: grade_analysis.cpp analysis.h ../ch04/Student_info.h

grade_analysis: grade_analysis.o analysis.o grade_check.o \
		 grade.o median.o Student_info.o

ext_main.o:	../ch05/ext_main.cpp grade.h ../ch04/Student_info.h ../ch04/median.h
	g++ $(CINCLUDE) -c -o ext_main.o ../ch05/ext_main.cpp

ext_fails1.o: ext_fails1.cpp grade.h ../ch04/Student_info.h ../ch04/median.h

ext_fails2.o: ext_fails2.cpp grade.h ../ch04/Student_info.h ../ch04/median.h

ext_fails1: ext_fails1.o ext_main.o grade.o median.o Student_info.o

ext_fails2: ext_fails2.o ext_main.o grade.o median.o Student_info.o

test: all
	./split_main <split.cpp
	./palin <../data/palins_input
	./urls_main <../data/urls.htm
	./grade_analysis <../data/grades
	./ext_fails1 <../data/grades
	./ext_fails2 <../data/grades

.cpp.o:
	g++ $(CINCLUDE) -c -o $@ $<

.PHONY: clean
clean:
	rm -rf $(obj) median.o split_main.o Student_info.o ext_main.o
	rm -rf split_main palin urls_main grade_analysis ext_fails1 ext_fails2