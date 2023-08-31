NAME = rush-02.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = srcs/
INCLUDES_DIR= includes/
SRCS = $(addprefix $(SRCS_DIR), all.c all_2.c all_3.c all_4.c all_5.c)
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c -I $(INCLUDES_DIR) -o $@ -c $<

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
