CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = leetCode.cpp
OBJS = $(SRC:.cpp=.o)
NAME = leetCode

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all