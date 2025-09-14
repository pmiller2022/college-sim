CXX = clang++
CFLASG = -Wall -g
objects = user.o student.o

all: $(objects)
	$(CXX) $(CFLAGS) $(objects) -o cs

user.o: user.cpp
	$(CXX) $(CFLAGS) -c user.cpp 

user.o: student.cpp
	$(CXX) $(CFLAGS) -c student.cpp 

clean:
	rm user