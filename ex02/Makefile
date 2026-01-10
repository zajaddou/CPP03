NAME		= FragTrap

CC			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS		= $(SRCS:.cpp=.o)

RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	@$(CC) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

run: all clean
	@clear
	@./$(NAME)
	@rm -f $(NAME)