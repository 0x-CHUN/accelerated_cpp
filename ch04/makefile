all: main1 main2 main3

obj = main3.o grade.o median.o Student_info.o

main1:	main1.cpp

main2:	main2.cpp

Student_info.o: Student_info.cpp Student_info.h

grade.o: grade.cpp grade.h median.h Student_info.h

main3.o: main3.cpp grade.h median.h Student_info.h

median.o:	median.cpp median.h

main3:	main3.o grade.o median.o Student_info.o
	g++ main3.o grade.o median.o Student_info.o -o main3

test: all
	./main1 <../data/single_grade
	./main2 <../data/single_grade
	./main2 <../data/grades
	./main3 <../data/grades

.PHONY: clean
clean:
	rm -rf $(obj)
	rm -rf main1 main2 main3