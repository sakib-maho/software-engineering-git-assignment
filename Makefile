CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude

.PHONY: build test clean

build:
	$(CC) $(CFLAGS) src/main.c src/stats.c -o stats_cli

test:
	$(CC) $(CFLAGS) tests/test_stats.c src/stats.c -o stats_test
	./stats_test

clean:
	rm -f stats_cli stats_test
