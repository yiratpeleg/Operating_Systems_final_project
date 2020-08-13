CC = gcc
FLAGS = -Wall -g
LIBFLAGS = -Wall -g shared

all: client server		

client: client.c
	$(CC) $(FLAGS) -o client client.c 
	
server: server.c
	$(CC) $(FLAGS) -o server server.c 		

.PHONY: clean all

clean:
	rm -f client server	


