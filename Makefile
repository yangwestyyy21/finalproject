TARGET = question1.c
LIBS = -lm
CC = gcc
CFLAGS = -g -Wall -I.

.PHONY: clean all default
 
default: $(TARGET)
all: default

HEADERS = hellofunc.h
OBJECTS = hellomake.o hellofunc.o
