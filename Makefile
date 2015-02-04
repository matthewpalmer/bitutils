CC=gcc
CFLAGS=-Wall -Werror -g

bitutils.o : bitutils.c
	$(CC) $(CFLAGS) -c $^
	
clean : 
	rm *.o