##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

CC	:=	g++

CPPFLAGS	=	-std=c++20
CPPFLAGS	+=	-W
CPPFLAGS	+=	-Wall
CPPFLAGS	+=	-Wextra
CPPFLAGS	+=	-Wundef
CPPFLAGS	+=	-Wshadow
CPPFLAGS	+=	-Wunreachable-code
CPPFLAGS	+=	-pedantic
CPPFLAGS	+=	-iquote include
CPPFLAGS	+=	-iquote .

BDIR	=	.build/release

SRC	=	mains/ex04.cpp
SRC	+=	Federation.cpp
SRC	+=	WarpSystem.cpp
SRC	+=	Borg.cpp
SRC	+=	Admiral.cpp
SRC	+=	BorgQueen.cpp

OBJ = $(SRC:%.cpp=$(BDIR)/%.o)

NAME = test

.PHONY: all
all: $(NAME)

$(BDIR)/%.o: %.cpp
	@ mkdir -p $(dir $@)
	$(CC) -o $@ -c $< $(CPPFLAGS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CPPFLAGS) -o $(NAME)

.PHONY: clean
clean:
	@ rm -f $(OBJ)
	@ rm -rf .build

.PHONY: fclean
fclean: clean
	@ rm -f $(NAME)

.NOTPARRALEL: re
.PHONY: re
re: fclean all
