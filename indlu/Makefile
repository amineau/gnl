all:
	@echo "Compilation libft..."
	@make -C ../libft/ re
	@echo "Done\nCompilation gnl..."
	@gcc -Wall -Wextra -Werror -L ../libft -lft -o test ../get_next_line.c main.c
	@echo "Done\nExecution avec fichier..."
	@echo "*************test1**************"
	@./test test1 | cat -e
	@echo "********************************\n"
	@echo "*************test2**************"
	@./test test2 | cat -e
	@echo "********************************\n"
	@echo "*************test3**************"
	@./test test3 | cat -e
	@echo "********************************"
	@echo "Done\nDeleted..."
	@echo "Check"
