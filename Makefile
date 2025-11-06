CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1239-Atalhos-Bloggo.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1239-Atalhos-Bloggo

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all