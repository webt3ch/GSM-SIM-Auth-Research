CC = gcc

all: sim_auth_demo

sim_auth_demo: main.c a3a8.c apdu_handler.c
	$(CC) -o sim_auth_demo main.c a3a8.c apdu_handler.c

clean:
	rm -f sim_auth_demo
