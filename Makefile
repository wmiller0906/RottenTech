CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.cpp)

# Entry point (leave as 'debug' or 'main')
ENTRY = debug
ENTRY_SRC = $(ENTRY).cpp

TARGET_DIR = bin
TARGET = $(TARGET_DIR)/RottenTech

all: $(TARGET)

$(TARGET): $(ENTRY_SRC) $(SRC)
	mkdir -p $(TARGET_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
