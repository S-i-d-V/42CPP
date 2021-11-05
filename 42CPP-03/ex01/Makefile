.SILENT:

#COLOR
RED =`tput setaf 1`
GREEN =`tput setaf 2`
CLEAR =`tput sgr0`

#GENERAL
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

#PROJET
NAME = ScavTrap
SRCS = ScavTrap.cpp ClapTrap.cpp main.cpp

#REGLES
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(SRCS) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled with success.$(CLEAR)"

clean:	clean
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) deleted with success.$(CLEAR)"

re: clean all
