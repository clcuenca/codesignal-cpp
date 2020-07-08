COMPILER=g++
CPPFLAGS=-Wall -g -pedantic -pedantic-errors -std=c++11

arabica_test: CodeSignal.hpp
	$(COMPILER) $(CPPFLAGS) -o CodeSignal CodeSignal.cpp IntroGates.cpp

clean:
	rm arabica_test
