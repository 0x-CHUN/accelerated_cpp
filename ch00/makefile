src = $(wildcard ./*.cpp)
obj = $(patsubst %.cpp, %.o,$(src))
target = hello
CXX = g++
$(target): $(obj)
	$(CXX) $(obj) -o $(target)
%.o: %.c
	$(CXX) -c $< -o $@
.PHONY: clean  
clean:
	rm -rf $(obj) $(target) 