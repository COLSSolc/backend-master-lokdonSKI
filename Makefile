CXX=g++
RM=rm -f
FLAGS=-ggdb3 -std=c++11
CFLAGS=-I.
SRCS=KnightSolver.cpp KnighCell.cpp complex.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

DEPS = KnightSolver.h KnightCell.h st.h
OBJ = KnightCell.o KnightSolver.o complex.o

%.o: %.cpp $(DEPS)
	$(CXX) -c -fPIC -o $@ $< $(FLAGS) $(CFLAGS)

knight: $(OBJ)
	g++ -o $@ $^ $(FLAGS) $(CFLAGS)

clean:
	rm *.o; rm *.so

shared:
	g++ KnightCell.o KnightSolver.o complex.o  -shared -o libPass.so
