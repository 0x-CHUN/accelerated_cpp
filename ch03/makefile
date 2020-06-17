src = $(wildcard ./*.cpp)
obj = $(patsubst %.cpp, %.o,$(src))
target = $(patsubst %.cpp, %, $(src))
CXX = g++

%.o: %.c
	$(CXX) -c $< -o $@

all: $(target)
.PHONY: all
avg: avg.o
	$(CXX) avg.o -o avg
avg2: avg2.o
	$(CXX) avg2.o -o avg2

.PHONY: clean  
clean:
	rm -rf $(obj) $(target)