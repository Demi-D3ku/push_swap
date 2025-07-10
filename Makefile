RED     := \033[0;31m
NC      := \033[0m

MAKEFLAGS += --no-print-directory
.SILENT:

NAME			=	push_swap

CC			=	gcc
FLAGS			=	-Wall	-Werror	-Wextra \
					-I $(LIBFT_DIR) \
					-I $(PRINTF_DIR)

RM			=	rm -f

SRC_DIR			=	srcs

SRCS			=	$(SRC_DIR)/a_to_b.c\
				$(SRC_DIR)/b_to_a.c\
				$(SRC_DIR)/argument_error.c\
				$(SRC_DIR)/argument_error2.c\
				$(SRC_DIR)/push.c\
				$(SRC_DIR)/rot.c\
				$(SRC_DIR)/rev_rot.c\
				$(SRC_DIR)/swap.c\
				$(SRC_DIR)/sorting.c\
				$(SRC_DIR)/more_than_three.c\
				$(SRC_DIR)/push_swap.c\
				$(SRC_DIR)/stack_ini.c\
				$(SRC_DIR)/stack_utils.c\
				$(SRC_DIR)/free_everying.c\
				$(SRC_DIR)/ft_isspace.c

OBJS			=	$(SRCS:.c=.o)

LIBFT_DIR   = libft
LIBFT       = $(LIBFT_DIR)/libft.a

PRINTF_DIR   = printf
PRINTF       = $(PRINTF_DIR)/libftprintf.a

all:			$(LIBFT) $(NAME)

$(LIBFT):
				@$(MAKE) -s -C $(LIBFT_DIR)

$(PRINTF):
				@$(MAKE) -s -C $(PRINTF_DIR)

$(NAME):			$(OBJS) $(LIBFT) $(PRINTF)
				@$(CC) $(FLAGS) $^ -o $@

.c.o:
				@${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:			
				@echo -e "$(RED)Cleaning object files…$(NC)"
				@$(MAKE) -s -C $(LIBFT_DIR) clean
				@$(MAKE) -s -C $(PRINTF_DIR) clean
				@$(RM) $(OBJS)

fclean:			clean
				@echo -e "$(RED)Removing executable $(NAME)…$(NC)"
				@$(MAKE) -s -C $(LIBFT_DIR) fclean
				@$(MAKE) -s -C $(PRINTF_DIR) fclean
				@$(RM) $(NAME)

re:				fclean all

.PHONY: 			all clean fclean re
