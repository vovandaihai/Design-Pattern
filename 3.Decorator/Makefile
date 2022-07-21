CXX       := g++
CXX_FLAGS := -Wall -Wextra -std=c++11 -ggdb

BIN     := bin

LIB     := lib
LIBRARIES   := 
EXECUTABLE  := main

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	@echo "🚀 Executing..."
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): *.cpp
	@echo "🚧 Building..."
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

clean:
	@echo "🧹 Clearing..."
	-rm $(BIN)/*
