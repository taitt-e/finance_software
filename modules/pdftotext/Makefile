# Define the C++ compiler to use
CXX = g++

# Define compiler flags (e.g., -Wall for warnings, -O2 for optimization)
CXXFLAGS = -Wall -O2

# Define the name of the executable
TARGET = pdftotext_app

# Define the source file
SOURCE = pdftotext.cpp

# Define the libraries required by Poppler (use pkg-config to find them)
# This command automatically finds the correct flags and libraries
LIBS = $(shell pkg-config --libs poppler-cpp)

# Define include paths for Poppler headers
# This command automatically finds the correct include paths
INCLUDE = $(shell pkg-config --cflags poppler-cpp)

# Default target to build the application
all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) $(INCLUDE) $(LIBS) -o $(TARGET)

# Clean up build artifacts
clean:
	rm -f $(TARGET) *.o