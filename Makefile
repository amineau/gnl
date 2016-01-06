all:
	@echo "Compilation libft..."
	@make -C libft/ re
	@echo "Done\nCompilation gnl..."
	@gcc -Wall -Wextra -Werror -L./libft -lft -o test get_next_line.c main.c
	@echo "Done\nExecution..."
	@echo "*******************************"
	@./test fiche
	@echo "*******************************"
	@echo "Done\nDeleted..."
	@rm test
	@echo "Check"
