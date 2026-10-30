CC ?= gcc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic
DEBUG_FLAGS = -DDEBUG_BUILD -g -O0
SOURCES = $(wildcard lesson_*.c)
PROGRAMS = $(SOURCES:.c=)
PROJECT_SOURCES = $(wildcard program_*.c)
PROJECT_PROGRAMS = $(PROJECT_SOURCES:.c=)

.PHONY: all clean debug

all: $(PROGRAMS) $(PROJECT_PROGRAMS)

lesson_%: lesson_%.c
	$(CC) $(CFLAGS) -o $@ $<

program_%: program_%.c
	$(CC) $(CFLAGS) -o $@ $<

debug:
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) lesson_10_preprocessor.c -o lesson_10_preprocessor_debug

clean:
	rm -f $(PROGRAMS) $(PROJECT_PROGRAMS) lesson_10_preprocessor_debug lesson_progress.txt numbers.bin random_access.txt
