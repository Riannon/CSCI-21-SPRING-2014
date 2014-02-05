# Makefile for programming challenges
#
# CSCI 21, Spring 2014
#
# Programmer: Kevan Johnson
#

# Target for programming challenge 4
# Date completed: 2-5-2014
pc4: pc4.cpp
	g++ -o pc4 pc4.cpp
	
# Target for programming challenge 3
# Date completed: 2-3-2014
pc3: pc3.cpp
	g++ -o pc3 pc3.cpp

# Target for programming challenge 2
# Date completed: 1-29-2014
pc2: pc2.cpp
	g++ -o pc2 pc2.cpp

# Target for programming challenge 1
# Date completed: 1-27-2014
pc1: pc1.cpp
	g++ -o pc1 pc1.cpp
	
all: pc1 pc2 pc3 pc4