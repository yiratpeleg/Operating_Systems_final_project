CC = gcc
FLAGS = -Wall -g
LIBFLAGS = -Wall -g shared

all: dir_traversal

check_pid: dir_traversal.c
	$(CC) $(FLAGS) -o dir_traversal dir_traversal.c		

.PHONY: clean all

clean:
	rm -f dir_traversal
