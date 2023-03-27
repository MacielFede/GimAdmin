VPATH = includes:src
# This makes makefile search in those directories the files that needs to compile

todo: main.o
	g++ -Wall -o main main.o
#In the 1st line we have to add (in order) the files  needed to compile, in the 2nd one we write the compilation line of the last file
# (or all the files in this case) 
main: main.cpp
	g++ -Wall -c src/main.cpp

clean:
	rm -f *.o
	rm -f main