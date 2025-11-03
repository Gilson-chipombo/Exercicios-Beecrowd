CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1168-LED.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1168-LED

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all