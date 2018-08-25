CC = g++
CXXFLAGS = -Wall -pedantic -std=c++11 -I.
DEPS = utils.h
OBJ = proj_euler1.o utils.o


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

prob1: $(OBJ)
	g++ -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~
