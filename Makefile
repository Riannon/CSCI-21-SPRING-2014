# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Kevan Johnson
FLAGS = -Wall -Wextra -Werror -pedantic
#filename: filename.cpp
#    g++ $(FLAGS) filename.cpp -o filename

# Target for programming challenge 6
# Date completed: 2-12-2014
pc6: pc6.cpp
	g++ pc6 -o pc6.cpp
	
# Target for programming challenge 5
# Date completed: 2-10-2014
pc5: pc5.cpp
	g++ $(FLAGS) pc5 -o pc5.cpp
	
# Target for programming challenge 4
# Date completed: 2-5-2014
pc4: pc4.cpp
	g++ $(FLAGS) pc4 -o pc4.cpp
	
# Target for programming challenge 3
# Date completed: 2-3-2014
pc3: pc3.cpp
	g++ $(FLAGS) pc3 -o pc3.cpp

# Target for programming challenge 2
# Date completed: 1-29-2014
pc2: pc2.cpp
	g++ $(FLAGS) pc2 -o pc2.cpp

# Target for programming challenge 1
# Date completed: 1-27-2014
pc1: pc1.cpp
	g++ $(FLAGS) pc1 -o pc1.cpp
	
all: pc1 pc2 pc3 pc4 pc5 pc6


