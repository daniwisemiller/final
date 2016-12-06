all: count

count: main.o
	g++ main.o -o count

main.o: main.cc
	g++ -c main.cc
check: main.o
	cppcheck main.cc valgrind ./count
doc:
	doxygen file.txt
clean:
	rm -rf *o count
archive:
	tar -cvzf final.tar.gz final
