CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -I.
DEPS = utils.h
OBJ = proj_euler1.o utils.o


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

prob1: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~
