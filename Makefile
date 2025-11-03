CXX = c++
CXXFLAGS = -Wall -std=c++17
SRC = 1272-sms-Oculta.cpp
OBJS = $(SRC:.cpp=.o)
NAME = 1272-sms-Oculta

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all