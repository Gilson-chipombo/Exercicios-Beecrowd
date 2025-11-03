CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1024-criptografia.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1024-criptografia

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all