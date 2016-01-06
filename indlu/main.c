#include "../get_next_line.h"

int main(int ac, char **av)
{
	char *str;
	int fd;

	fd = open(av[1], O_RDONLY);
	if (ac == 2)
	{
		while (get_next_line(fd, &str) == 1)
			ft_putendl(str);
	}
	return (0);
}
