.SILENT:

#COLOR
RED =`tput setaf 1`
GREEN =`tput setaf 2`
YELLOW =`tput setaf 3`
BLUE =`tput setaf 4`
CLEAR =`tput sgr0`

#ALIASES
CC = clang++
CCFLAGS = -Wall -Wextra -Werror
RM = rm -rf

#PROJECT
EXEC = Iter

#FILES
MAIN = main.cpp

#RULES

all: $(EXEC)

$(EXEC):
	$(CC) $(CCFLAGS) $(MAIN) -o $(EXEC)
	echo "$(GREEN)Binary $(YELLOW)$(EXEC)$(GREEN) is now ready to use !$(CLEAR)"

fclean:
	$(RM) $(EXEC)
	echo "$(RED) - Binary $(YELLOW)$(EXEC)$(RED) deleted.$(CLEAR)"

newline:
	echo ""

re: fclean newline all

.PHONY: all