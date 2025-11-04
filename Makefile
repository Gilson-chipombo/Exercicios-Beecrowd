CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1234-Sentenca-Dancante.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1234-Sentenca-Dancante

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all