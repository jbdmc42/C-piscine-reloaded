#include <unistd.h>

void	ft_putchar(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

void	ft_print_alphabet(void)
{
	ft_putchar();
}

/* int	main(void)
{
	ft_print_alphabet();
	return (0);
} */