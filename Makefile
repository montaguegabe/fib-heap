CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g -std=c++11
LDFLAGS=-g

SRCS=main.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) $(LDFLAGS) -o main $(OBJS)

main.o: main.cpp FibHeap.hpp

clean:
	$(RM) main
	$(RM) $(OBJS)

distclean: clean
	$(RM) main
