# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -c

# Executable name
TARGET = TicTacToe

# Source files
SOURCES = board.cpp game.cpp main.cpp

# Object files (replace .cpp with .o)
OBJECTS = $(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^

# Compilation rules
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJECTS) $(TARGET)

