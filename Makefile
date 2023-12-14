
all:
	cc -g3 -O0 -Wall -Wextra main.c -o sample
	./sample

asan:
	cc -g main.c -o sample -fsanitize=address
	./sample

.PHONY: all asan