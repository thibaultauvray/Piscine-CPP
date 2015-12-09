# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouvel <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/27 11:57:55 by anouvel           #+#    #+#              #
#    Updated: 2015/11/07 17:13:59 by tauvray          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# 	LIBRARY OUTPUT

NAME	=	ft_retro

# **************************************************************************** #
# 	SOURCES

DIRSRC	=	src/

SRCALG	=	$(DIRSRC)algo/
SRCMOV	=	$(SRCALG)movements/
SRCPRT	=	$(DIRSRC)print/
SRCTLS	=	$(DIRSRC)tools/

SRC		=	$(DIRSRC)main.cpp \
			$(DIRSRC)Ennemy.cpp \
			$(DIRSRC)GameEntity.cpp \
			$(DIRSRC)Player.cpp \
			$(DIRSRC)Bullets.cpp \

# **************************************************************************** #
# 	DIRECTORIES

DIROBJ	=	.obj
DIRLST	= 	src
DIRINC	=	./includes

# **************************************************************************** #
# 	COMPILATION

CC		=	clang++
OBJ		=	$(addprefix $(DIROBJ)/, $(SRC:.cpp=.o))
LCFLAG	=	-Wall -Wextra -Werror
LDFLAG	=	-I $(DIRINC) 
LIBS	=	-lncurses

# **************************************************************************** #

all		:	$(NAME)

$(NAME)	:	$(DIROBJ) $(OBJ)
	@printf " ---------------------------------------------------------------- "
	@printf "\e[36m\n=> $(NAME) - %-21s\t\t\t" "linking"
	@$(CC) $(LCFLAG) $(LDFLAG) $(OBJ) $(LIBS) -o $(NAME)
	@printf "\t\e[32m[V]\e[0m\n"
	@printf " ---------------------------------------------------------------- "
	@printf "\n\e[32m=> $(NAME) - %-21s\n\e[0m" "COMPLETED"
	@printf " ---------------------------------------------------------------- "
	@printf "\n"

$(addprefix $(DIROBJ)/, %.o) : %.cpp
	@mkdir -p $(@D)
	@printf "=> $(NAME) - %-10s %-37s" "$(CC)" "$@"
	@$(CC) $(LCFLAG) $(LDFLAG) -o $@ -c $<
	@printf "\t\e[32m[V]\e[0m\n"

$(DIROBJ) :
	@printf "\e[33m=> $(NAME) - %-21s\t\t\t" "making sub-dirs"
	@/bin/mkdir $(DIROBJ); \
		for DIR in $(DIRLST); \
		do \
		/bin/mkdir $(DIROBJ)/$$DIR; \
		done
	@printf "\t\e[32m[V]\e[0m\n"
	@printf " ---------------------------------------------------------------- "
	@printf "\e[36m\n=> $(NAME) - building\n\e[0m"

clean	:
	@printf " ---------------------------------------------------------------- "
	@printf "\n\e[33m=> $(NAME) - %-21s\t\t\t" "removing objects"
	@/bin/rm -rf $(DIROBJ)
	@printf "\t\e[32m[V]\e[0m\n"

fclean	: clean
	@printf "\e[33m=> $(NAME) - %-21s\t\t\t" "removing executable"
	@/bin/rm -f $(NAME)
	@printf "\t\e[32m[V]\e[0m\n"

re		: fclean all
	
.PHONY:	clean fclean re all
