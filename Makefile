CC = gcc
CFLAGS = -O0
INCLUDE = -I include/
ALL_OBJS = bin/lexer.o bin/debug.o bin/utils.o bin/main.o

build: lexer debug utils main
	$(CC) $(ALL_OBJS) -o bin/italang $(CFLAGS) $(INCLUDE)
	rm bin/*.o

lexer:
	$(CC) -c src/lexer.c -o bin/lexer.o $(CFLAGS) $(INCLUDE)

debug:
	$(CC) -c src/debug.c -o bin/debug.o $(CFLAGS) $(INCLUDE)

utils:
	$(CC) -c src/utils.c -o bin/utils.o $(CFLAGS) $(INCLUDE)

main:
	$(CC) -c src/main.c -o bin/main.o $(CFLAGS) $(INCLUDE)
