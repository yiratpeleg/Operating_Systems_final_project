CC = gcc
FLAGS = -Wall -g
LIBFLAGS = -Wall -g shared

all: check_pid

check_pid: check_pid.c
	$(CC) $(FLAGS) -o check_pid check_pid.c		

.PHONY: clean all

clean:
	rm -f check_pid
