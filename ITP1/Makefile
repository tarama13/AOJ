CC = g++
CFLAGS = -Wall -lstdc++
SRC := $(wildcard *.cpp)
PROGS := $(SRC:%.cpp=%)

all: $(PROGS)

%: %.cpp
	${CC} -o $@ $<
