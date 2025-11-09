CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1253-Cifra-de-Cesar.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1253-Cifra-de-Cesar

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all