SRC := $(wildcard ./src/*.c)
OBJS := $(SRC:.c=.o)

CFLAGS := -Wall -Wextra -pedantic -std=c99

main: $(OBJS)
	$(CC) $(OBJS) -o main $(CFLAGS)

%.o:%.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) main
