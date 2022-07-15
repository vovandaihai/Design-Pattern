CXX       := g++
CXX_FLAGS := -Wall -Wextra -std=c++11 -ggdb

BIN     := C:/Users/JXNM64/Design-Pattern/1.Strategy_design/bin
SRC     := C:/Users/JXNM64/Design-Pattern/1.Strategy_design/Duck
INCLUDE := C:/Users/JXNM64/Design-Pattern/1.Strategy_design/Duck
LIB     := lib
LIBRARIES   := 
EXECUTABLE  := main.exe

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
