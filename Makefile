# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Kevan Johnson
FLAGS = -Wall -Wextra -Werror -pedantic
#filename: filename.cpp
#    g++ $(FLAGS) filename.cpp -o filename


# Target for programming challenge 7
# Date completed: 2-19-2014
pc7: pc7.cpp
	g++ $(FLAGS) pc7.cpp -o pc7

# Target for programming challenge 6
# Date completed: 2-12-2014
pc6: pc6.cpp
	g++ $(FLAGS) pc6.cpp -o pc6
	
# Target for programming challenge 5
# Date completed: 2-10-2014
pc5: pc5.cpp
	g++ $(FLAGS) pc5.cpp -o pc5
	
# Target for programming challenge 4
# Date completed: 2-5-2014
pc4: pc4.cpp
	g++ $(FLAGS) pc4.cpp -o pc4
	
# Target for programming challenge 3
# Date completed: 2-3-2014
pc3: pc3.cpp
	g++ $(FLAGS) pc3.cpp -o pc3

# Target for programming challenge 2
# Date completed: 1-29-2014
pc2: pc2.cpp
	g++ $(FLAGS) pc2.cpp -o pc2

# Target for programming challenge 1
# Date completed: 1-27-2014
pc1: pc1.cpp
	g++ $(FLAGS) pc1.cpp -o pc1
	
all: pc1 pc2 pc3 pc4 pc5 pc6


