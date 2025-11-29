CXX = c++
CXXFLAGS = -Wall -std=c++17
<<<<<<< HEAD
SRC = leetCode.cpp
OBJS = $(SRC:.cpp=.o)
NAME = leetCode
=======
SRC = ArrayHash.cpp
OBJS = $(SRC:.cpp=.o)
NAME = ArrayHash
>>>>>>> cb77609 (Array Hash imcomplete)

all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean: 
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all