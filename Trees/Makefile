CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17
SRCS = insertAndPrintTree.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = insertAndPrintTree

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: flcean all