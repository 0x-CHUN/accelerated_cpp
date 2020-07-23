all: concat_files copyfile letter_grade.o pointer_example write_args

CC = g++

concat_files: concat_files.o

copyfile: copyfile.o

pointer_example: pointer_example.o 

write_args: write_args.o

test: all
	./concat_files ../data/name1 ../data/name2
	./copyfile
	./pointer_example
	./write_args this is a test

.PHONY: clean
clean:
	rm -rf *.o 
	rm -rf concat_files copyfile letter_grade pointer_example write_args
	rm -rf out