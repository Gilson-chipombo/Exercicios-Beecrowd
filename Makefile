CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1238-Combinador.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1238-Combinador

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all