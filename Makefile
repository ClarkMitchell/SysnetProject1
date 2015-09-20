TARGET    = myshell
MAIN_SRCS = $(wildcard ./*.c)
MAIN_OBJS = $(MAIN_SRCS:.c=.o)

CC		  = gcc
CFLAGS    = -I. -Iinclude
LDFLAGS   =

all: $(MAIN_OBJS)
	@$(CC) $(CFLAGS) -g -Wall -o $(TARGET) $(MAIN_OBJS) $(LDFLAGS)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f ./*.o $(TARGET)
