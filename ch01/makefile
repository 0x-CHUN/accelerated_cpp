src = $(wildcard ./*.cpp)
obj = $(patsubst %.cpp, %.o,$(src))
target = $(patsubst %.cpp, %, $(src))
CXX = g++

%.o: %.c
	$(CXX) -c $< -o $@

all: greet frame
.PHONY: all
greet: greet.o
	$(CXX) greet.o -o greet
frame: frame.o
	$(CXX) frame.o -o frame

.PHONY: clean  
clean:
	rm -rf $(obj) $(target)