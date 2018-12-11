# Ethan Malenchek
# CS3560 Final

.DEFAULT_GOAL := all

all: count count.o doc docs

count: count.o
	g++ -o count count.cc

count.o: count.cc
	g++ -c count.cc

doc:
	doxygen -g

docs: Doxyfile
	doxygen Doxyfile

clean:
	rm count count.o Doxyfile

check: count count.o
	cppcheck count
