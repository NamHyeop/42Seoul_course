# NAME		= libftprintf.a
# LIBFT		= libft
# LIBFT_LIB	= libft.a

# SRCS		= ft_printf_main.c \
# 				ft_printf_sub.c \
# 				ft_printf_char.c \
# 				ft_printf_string.c \
# 				ft_printf_int.c
# OBJS		= ${SRCS:.c=.o};
# HEADER		= ft_printf_header.h
# RM			= rm -f
# CC			= gcc
# CFLAGS		= -Wall -Wextra -Werror
# LIBC		= ar rc

# .c.o : %.c ${HEADER}
# 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# ${NAME} : ${OBJS}
# 	make all -C ${LIBFT}/
# 	cp ${LIBFT}/${LIBFT_LIB} ${NAME}
# 	${LIBC} ${NAME} ${OBJS}

# all : ${NAME}

# fclean : clean
# 	${RM} ${NAME}
# 	make fclean -C $(LIBFT)

# clean :
# 	${RM} ${OBJS}
# 	make clean -C $(LIBFT)

# re : fclean all

# .PHONY: all re fclean clean bonus

NAME		= libftprintf.a
LIBFT		= libft
LIBFT_LIB	= libft.a

SRCS		= ft_printf_main.c \
				ft_printf_sub.c \
				ft_printf_char.c \
				ft_printf_string.c \
				ft_printf_int.c
OBJS		= $(SRCS:.c=.o)
HEADER		= ft_printf.h
RM			= rm -f
LIBC		= ar rc
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

.c.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJS)
	make all -C $(LIBFT)/
	cp $(LIBFT)/$(LIBFT_LIB) $(NAME)
	$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

fclean : clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT)

clean :
	$(RM) $(OBJS)
	make clean -C $(LIBFT)

re : fclean all

.PHONY: all bonus re fclean clean
