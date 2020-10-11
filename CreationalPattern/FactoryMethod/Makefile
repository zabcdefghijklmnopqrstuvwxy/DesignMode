CC:=g++
INCLUDE:=-I.
CXXFLAGS:=-Wall -g -std=c++11
LDFLAGS:=

SRCS:=$(wildcard *.cpp)
OBJS:=$(patsubst %cpp,%o,$(SRCS))

TARGET:=test

.PHONY:all clean

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJFILE):%o:%c
	$(CC) -o $^ $(CXXFLAGS) $(INCLUDE)

clean:
	rm -fr $(OBJS) $(TARGET)
