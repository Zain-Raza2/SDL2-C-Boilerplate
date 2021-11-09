all: compile run

compile: 
	mkdir -p build
	gcc -o build/main -Iincludes `find src -name "*.c"` -lSDL2 -lSDL2main

run:
	./build/main

clean:
	rm -rf build