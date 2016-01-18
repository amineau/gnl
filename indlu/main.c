#include "../get_next_line.h"

int main(int ac, char **av)
{
	char *str;
	int fd;
	int i;

	if (ac == 2)
		fd = open(av[1], O_RDONLY);
	else
		fd = 0;
	while ((i = get_next_line(fd, &str)))
	{
		ft_putnbr(i);
		ft_putchar('\t');
		ft_putendl(str);
	}
		ft_putnbr(i);
		ft_putchar('\t');
		ft_putendl(str);
	return (0);
}
