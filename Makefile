CC=gcc
CC_FLAGS=-Wall -Wstrict-aliasing=2 -Wextra -pedantic -ansi -g -O2

all: file_merger.o file_sorter.o tests

file_merger.o: file_merger.h file_merger.c
	$(CC) $(CC_FLAGS) -o $@ -c file_merger.c

file_name_utils.o: file_name_utils.h file_name_utils.c
	$(CC) $(CC_FLAGS) -o $@ -c file_name_utils.c

file_sorter.o: file_sorter.h file_sorter.c file_name_utils.o
	$(CC) $(CC_FLAGS) -o $@ -c file_sorter.c

tests: tests.c file_merger_tests.c file_sorter_tests.c file_merger.o file_sorter.o file_name_utils.o
	$(CC) $(CC_FLAGS) -o tests $^

check: tests
	./tests

test: tests
	./tests

clean:
	rm -f *.o tests *~