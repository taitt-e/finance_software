# Define the C++ compiler to use
CXX = g++

# Define compiler flags (e.g., -Wall for warnings, -O2 for optimization)
CXXFLAGS = -Wall -O2

# Define the name of the executable
TARGET = personal_finance_software

# Define the source file
SOURCE = main.cpp

# Default target to build the application
all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) $(INCLUDE) $(LIBS) -o $(TARGET)

# Clean up build artifacts
clean:
	rm -f $(TARGET) *.o
