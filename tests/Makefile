# Define the compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++17 -I../src -I/opt/homebrew/opt/boost/include

# Define the linker flags
LDFLAGS = -L/opt/homebrew/opt/boost/lib -lboost_unit_test_framework

# Define the source files
SRC = ../src/Card.cpp ../src/CardTypes.cpp CardTest.cpp

# Define the output executable
TARGET = CardTest

# Default target to build the executable
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

# Clean target to remove the executable
clean:
	rm -f $(TARGET)

.PHONY: all clean
