CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic
OBJ= main.o Rational.o

main: $(OBJ)
	$(CXX) $^ -o $@
	make clean

%.o : ./src/%.cpp
	$(CXX) -c $(CXXFLAGS) $<

clean:
	rm -f $(OBJ)