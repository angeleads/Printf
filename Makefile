##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## lib's Makefile
##

NAME	=	libmy.a

INC_PATH	=	include/

PRINTS_PATH	=	prints/
PRINTS_FILES	=	my_putchar.c	\
			my_putstr.c

PRINTS	=	$(addprefix $(PRINTS_PATH), $(PRINTS_FILES))

STRINGS_PATH	=	strings/
STRINGS_FILES	=	my_revstr.c		\
			my_strcapitalize.c	\
			my_strcat.c		\
			my_strcmp.c		\
			my_strcpy.c		\
			my_strlen.c		\
			my_strncat.c		\
			my_strdup.c		\
			my_strncmp.c		\
			my_strncpy.c

STRINGS	=	$(addprefix $(STRINGS_PATH), $(STRINGS_FILES))

MATHS_PATH	=	maths/
MATHS_FILES	=	my_compute_power_rec.c	\
			my_find_prime_sup.c	\
			my_getnbr.c		\
			my_put_nbr.c		\
			my_put_nbr_long_long.c	\
			my_put_nbr_long.c	\
			my_put_un_nbr_long.c	\
			my_put_float_nbr.c	\
			my_put_un_nbr.c		\
			my_put_nbr_base.c	\
			my_un_putnbr_base.c	\
			my_swap.c		\
			my_compute_square_root.c

MATHS	=	$(addprefix $(MATHS_PATH), $(MATHS_FILES))

ARRAYS_PATH	=	arrays/
ARRAYS_FILES	=	my_free_array.c	\
			my_show_word_array.c

ARRAYS	=	$(addprefix $(ARRAYS_PATH), $(ARRAYS_FILES))

CHECKS_PATH	=	checks/
CHECKS_FILES	=	my_isneg.c		\
			my_str_isalpha.c	\
			my_str_islower.c	\
			my_str_isnum.c		\
			my_str_isprintable.c	\
			my_str_isupper.c	\
			my_strlowcase.c		\
			my_strupcase.c		\

CHECKS	=	$(addprefix $(CHECKS_PATH), $(CHECKS_FILES))

FLAGS_PATH	=	flags/
FLAGS_FILES	=	flag_char.c	\
			counter_nbr.c	\
			flag_str.c	\
			flag_nb_d.c 	\
			flag_nb_i.c 	\
			flag_pointer.c 	\
			flag_un_nb.c	\
			flag_binary.c	\
			flag_oct.c		\
			flag_low_hexa.c	\
			flag_up_hexa.c	\
			flag_pourcentage.c

FLAGS	=	$(addprefix $(FLAGS_PATH), $(FLAGS_FILES))

SET_PATH	=	set_printf/
SET_FILES	=	set_pointers_my_printf.c	\
			set_printf.c			\
			set_recognition_my_printf.c

SET	=	$(addprefix $(SET_PATH), $(SET_FILES))

MYPRINTF_PATH	=	my_printf/
MYPRINTF_FILES	=	$(SET)	\
			$(FLAGS)\
			my_printf.c

MYPRINTF	=	$(addprefix $(MYPRINTF_PATH), $(MYPRINTF_FILES))

LIB_PATH	=	lib/
LIB_FOLDERS	=	$(PRINTS)	\
			$(STRINGS)	\
			$(MATHS)	\
			$(ARRAYS)	\
			$(CHECKS)

LIB	=	$(addprefix $(LIB_PATH), $(LIB_FOLDERS))

SRC_PATH	=	src/
SRC_FOLDERS	=	$(LIB)	\
			$(MYPRINTF)	\
			main.c

SRCS	=	$(addprefix $(SRC_PATH), $(SRC_FOLDERS))

CFLAGS	+=	-I $(INC_PATH)

OBJS	=	$(SRCS:.c=.o)

LIBCOMP	=	ar rc

RM	=	rm -rf

all:	$(NAME)

$(NAME):	$(OBJS)
	$(LIBCOMP) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)
	$(RM) ./a.out

re:	fclean all
