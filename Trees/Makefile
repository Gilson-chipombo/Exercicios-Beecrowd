CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17
SRCS = in-order.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = in-order

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: flcean all