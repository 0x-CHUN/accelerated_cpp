src = $(wildcard ./*.cpp)
obj = $(patsubst %.cpp, %.o,$(src))
target = $(patsubst %.cpp, %, $(src))
CXX = g++

%.o: %.c
	$(CXX) -c $< -o $@

all: frame
.PHONY: all
frame: frame.o
	$(CXX) frame.o -o frame

.PHONY: clean  
clean:
	rm -rf $(obj) $(target)