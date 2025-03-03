SHELL := bash
CXX = g++
CXXFLAGS = -g

run: main
	./main.out

main: clean Media.o main.o
	$(CXX) $(CXXFLAGS) Media.o main.o -o main.out

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Media.o:
	$(CXX) $(CXXFLAGS) -c Media.cpp -o Media.o

clean:
	rm -f *.o main.out