CXX = g++
CXXFLAGS = -Wall -Iinclude

SRCS = $(wildcard src/*.cpp)
OBJS = $(SRCS:.cpp=.o)
TARGET = tp9

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
	rm -f $(OBJS)

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
