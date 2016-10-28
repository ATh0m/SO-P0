CXX = g++
CXXFLAGS = -std=c++11 -Wall -Werror -Wextra -pedantic

default: main

main: main.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp

run: main
	./main

clean:
	rm main

.PHONY: default run clean
