# Compiler settings
CXX = g++
CXXFLAGS = -Wall

# Source files and executable names
SRCS = arr.cpp teststack.cpp testLinkedList.cpp vector.cpp vector1.cpp
EXECS = program1 program2 program3 program4 program5

# Header files
HEADERS = stack.h linkedlist.h

# Default target - build all programs
all: $(EXECS)

# Rule to build each program
program1: arr.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

program2: teststack.cpp stack.h
	$(CXX) $(CXXFLAGS) $< -o $@

program3: testLinkedList.cpp linkedlist.h
	$(CXX) $(CXXFLAGS) $< -o $@

program4: vector.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

program5: vector1.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Rule to clean all executables
clean:
	rm $(EXECS)

# Dependencies
program1.o: arr.cpp
program2.o: teststack.cpp stack.h
program3.o: testLinkedList.cpp linkedlist.h
program4.o: vector.cpp
program5.o: vector1.cpp
