CC = c++
CFLAGS =  -Wall -Werror -Wextra -std=c++98

NAME = losersed
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
	$(CC) $(CFLAGS) -o $@ $(OBJ)

$(OBJDIR)/%.o: $(SRCDIR)/%$(EXT) $(HEADERS)
	$(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<


.PHONY: clean
clean: 
	$(RM) $(DELOBJ) $(OBJDIR)
.PHONY: fclean
fclean: clean 
	$(RM) $(NAME)
.PHONY: re
re: fclean all

.PHONY: test
test: $(NAME)
	chmod -r files/noPermission.txt
	./$< files/file1.txt "a" "aa"
	./$< files/file2.txt "the" ""
	./$< files/file3.txt " " "----"
	./$< files/empty.txt "a" "b"
	./$< files/noPermission.txt "ok" "not ok"
.PHONY : ctests
ctests :
	$(RM) files/*.replace