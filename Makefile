FLAGS:= -Wall -Werror

CC:= gcc -g3

EXE:= bin/100-matches

all: build build/src bin $(EXE)

build build/src bin:
	mkdir $@

$(EXE): $(patsubst src/%.c, build/src/%.o,$(wildcard src/*.c))
	$(CC) $^ -o $@ $(FLAGS)


build/src/%.o: src/%.c
	$(CC) $< -c -o $@ $(FLAGS)

clean:
	rm -rf build bin