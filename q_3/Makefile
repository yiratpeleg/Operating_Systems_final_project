CC = gcc
FLAGS = -Wall -g
LIBFLAGS = -Wall -g shared

all: set_policy

set_policy: set_policy.c
	$(CC) $(FLAGS) -o set_policy set_policy.c 
	
.PHONY: clean all

clean:
	rm -f set_policy	
	
