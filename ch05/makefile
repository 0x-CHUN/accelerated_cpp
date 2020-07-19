all: fails_vec1 fails_vec2 fails_iters fails_list split_main split_main2 pics_main

CC = g++

obj = $(patsubst %.cpp, %.o,$(wildcard ./*.cpp))

CINCLUDES = -I../ch04

median.o: ../ch04/median.cpp ../ch04/median.h
	g++ $(CINCLUDES) -c -o median.o ../ch04/median.cpp

Student_info.o: ../ch04/Student_info.cpp ../ch04/Student_info.h
	g++ $(CINCLUDES) -c -o Student_info.o ../ch04/Student_info.cpp

grade.o: grade.cpp grade.h
	g++ $(CINCLUDES) -c -o grade.o grade.cpp

ext_main.o: ext_main.cpp grade.h ../ch04/Student_info.h
	g++ $(CINCLUDES) -c -o ext_main.o ext_main.cpp

list_main.o: list_main.cpp grade.h ../ch04/Student_info.h
	g++ $(CINCLUDES) -c -o list_main.o list_main.cpp

fails_vec1.o: fails_vec1.cpp grade.h ../ch04/Student_info.h
	g++ $(CINCLUDES) -c -o fails_vec1.o fails_vec1.cpp

fails_vec2.o: fails_vec2.cpp grade.h ../ch04/Student_info.h
	g++ $(CINCLUDES) -c -o fails_vec2.o fails_vec2.cpp

fails_iters.o: fails_iters.cpp grade.h ../ch04/Student_info.h
	g++ $(CINCLUDES) -c -o fails_iters.o fails_iters.cpp

fails_list.o: fails_list.cpp grade.h ../ch04/Student_info.h
	g++ $(CINCLUDES) -c -o fails_list.o fails_list.cpp

fails_vec1: fails_vec1.o ext_main.o grade.o median.o Student_info.o

fails_vec2: fails_vec2.o ext_main.o grade.o median.o Student_info.o

fails_iters: fails_iters.o ext_main.o grade.o median.o Student_info.o

fails_list: fails_list.o list_main.o grade.o median.o Student_info.o

pics.o:	pics.cpp pics.h

pics_main.o: pics_main.cpp pics.h

pics_main: pics_main.o pics.o

split.o: split.cpp split.h

split_main.o: split_main.cpp split.h

split_main2.o: split_main2.cpp split.h

split_main:	split_main.o split.o

split_main2: split_main2.o split.o

test: all
	./fails_vec1 <../data/grades
	./fails_vec2 <../data/grades
	./fails_iters <../data/grades
	./fails_list <../data/grades
	./split_main < split_main.cpp
	./split_main2 < split_main2.cpp
	./pics_main

.PHONY: clean
clean:
	rm -rf $(obj) median.o Student_info.o
	rm -rf fails_vec1 fails_vec2 fails_iters fails_list split_main split_main2 pics_main