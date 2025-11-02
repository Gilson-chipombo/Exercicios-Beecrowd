CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1212-Aritmetica-primaria.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1212-Aritmetica-primaria

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all