CC=gcc
SRCS=$(wildcard *.c)
OBJS=$(SRCS:%.c=%.o)
TARGET=result

$(TARGET):$(OBJS)
	$(CC) $^ -o $@

%.o:%.c
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJS) $(TARGET)
