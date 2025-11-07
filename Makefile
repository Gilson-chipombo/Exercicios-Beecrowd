CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1241-Encaixa-ou-Nao-II.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1241-Encaixa-ou-Nao-II

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all