.SILENT:

#COLOR
RED =`tput setaf 1`
GREEN =`tput setaf 2`
CLEAR =`tput sgr0`

#GENERAL
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

#PROJET
NAME =
SRCS =
OBJS =

#REGLES
all: $(NAME)

%.o:%.c
	@$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) compiled with success.$(CLEAR)"

clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) deleted with success.$(CLEAR)"

re: fclean all
