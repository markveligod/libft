
SRC_PART = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_itoa.c ./ft_memccpy.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_putstr_fd.c ./ft_strchr.c ./ft_strdup.c ./ft_strjoin.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strmapi.c ./ft_strncmp.c ./ft_strnstr.c ./ft_strrchr.c ./ft_split.c ./ft_strtrim.c ./ft_substr.c ./ft_tolower.c ./ft_toupper.c
SRC_BONUS = ./ft_lstadd_back.c ./ft_lstadd_front.c ./ft_lstclear.c ./ft_lstdelone.c ./ft_lstiter.c ./ft_lstlast.c ./ft_lstmap.c ./ft_lstnew.c ./ft_lstsize.c
NAME = libft.a
FLAGS = -Wall -Werror -Wextra
CC = gcc -c
HDRS = libft.h
OBJ_PART = $(SRC_PART:.c=.o)
OBJ_BONUS = $(OBJ_PART) $(SRC_BONUS:.c=.o)

%.o:%.c
	@gcc -Wall -Wextra -Werror -o $@ -c $<
	@echo "\033[90m[\033[32mOK\033[90m]\033[34m Compiling $<\033[0m"

$(NAME): $(OBJ_PART) $(HDRS)
	@$(CC) $(SRC_PART) $(FLAGS)
	@ar r $(NAME) $(OBJ_PART)
	@echo "\033[90m[\033[32mSuccess\033[90m]\033[32m Successfully compiled Libft.\033[0m"

bonus: $(OBJ_BONUS) $(HDRS)
	@$(CC) $(SRC_PART) $(SRC_BONUS) $(FLAGS)
	@ar r $(NAME) $(OBJ_BONUS)
	@echo "\033[90m[\033[32mSuccess\033[90m]\033[32m Successfully compiled Libft with Bonus.\033[0m"

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ_BONUS)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Object files deleted\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[90m[\033[91mDeleting\033[90m]\033[31m Libft.a deleted.\033[0m"

re: fclean all

.PHONY: all clean fclean re bonus
