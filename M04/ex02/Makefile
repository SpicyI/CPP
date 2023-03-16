CC = c++
CFLAGS =  -Wall -Werror -Wextra -std=c++98

NAME = Animal
EXT = .cpp
SRCDIR = ./srcs
HEADERS = $(wildcard ./includes/*.hpp);
OBJDIR = obj
HEADIR = ./includes
OBJ_DIR= mkdir -p obj

SRC = $(wildcard $(SRCDIR)/*$(EXT))
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)

RM = rm -rf
DELOBJ = $(OBJ)

all: $(NAME)


$(NAME): $(OBJ) $(HEADERS)
	$(CC) -I $(HEADIR) $(CFLAGS) -o $@ $(OBJ)

$(OBJDIR)/%.o: $(SRCDIR)/%$(EXT) $(HEADERS)
	$(OBJ_DIR)
	$(CC) -I $(HEADIR) $(CFLAGS) -o $@ -c $<


.PHONY: clean
clean: 
	$(RM) $(DELOBJ) $(OBJDIR)
.PHONY: fclean
fclean: clean 
	$(RM) $(NAME)
.PHONY: re
re: fclean all