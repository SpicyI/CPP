CC = c++
CFLAGS =  -Wall -Werror -Wextra -std=c++98

NAME = Account
EXT = .cpp
SRCDIR = .
HEADERS = $(wildcard ./*.hpp);
OBJDIR = obj
OBJ_DIR= mkdir -p obj

SRC = $(wildcard $(SRCDIR)/*$(EXT))
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)

RM = rm -rf
DELOBJ = $(OBJ)

all: $(NAME)


$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(TH_FLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%$(EXT) $(HEADERS)
	$(OBJ_DIR)
	$(CC) $(CFLAGS) $(TH_FLAGS) -o $@ -c $<


.PHONY: clean
clean: 
	$(RM) $(DELOBJ) $(OBJDIR)
.PHONY: fclean
fclean: clean 
	$(RM) $(NAME)
.PHONY: re
re: fclean all