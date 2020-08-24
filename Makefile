FLAGS := -Wall -Werror -Isrc -Ictest

CC := gcc -g3

EXE := bin/100-matches
TEST_EXE := bin/100-matches_test
PAT := $(patsubst src/%.c, build/src/%.o,$(wildcard src/*.c))

all: build build/src bin $(EXE) $(wildcard src/*.c) 
test: all build/test $(TEST_EXE) $(wildcard test/*.c) 

build build/src build/test bin:
	mkdir $@

build/src/%.o: src/%.c
	$(CC) $< -c -o $@ $(FLAGS)

build/test/%.o: test/%.c
	$(CC) $< -c -o $@ $(FLAGS) 

$(EXE): $(PAT)
	$(CC) $^ -o $@ $(FLAGS)

$(TEST_EXE):$(patsubst test/%.c, build/test/%.o, $(wildcard test/*.c)) $(patsubst build/src/main.o, , $(PAT))
	$(CC) $^ -o $@ $(FLAGS)

begin_test:
	./$(TEST_EXE)


clean:
	rm -rf build bin