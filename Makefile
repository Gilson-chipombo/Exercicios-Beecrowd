CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1235-De-dentro-para-fora.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1235-De-dentro-para-fora

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all