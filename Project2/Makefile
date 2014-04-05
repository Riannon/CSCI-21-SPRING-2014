# Makefile for Project 2
# Programmer: Kevan Johnson
#
# CSCI 21, Spring 2014
#
# Date created: 3-03-2014
# Date completed: 3-03-2014
#

FLAGS = -Wall -Wextra -Werror -pedantic

# To create executable
project-2: Prize.o Box.o project-2.o
	g++ $(FLAGS) Prize.o Box.o project-2.o -o project-2

# To compile driver(project-2.cpp) only
project-2.o: project-2.cpp
    g++ -c $(FLAGS) project-2.cpp -o project-2.o

# To compile Box only
Box.o: Box.h Box.cpp
    g++ -c $(FLAGS) Box.cpp -o Box.o
    
# To compile Prize only
Prize.o: Prize.h Prize.cpp
    g++ -c $(FLAGS) Prize.cpp -o Prize.o

# To delete object files
clean:
    rm -f *.o

# To delete object files and executable
cleanall: clean
    rm -f project-2

