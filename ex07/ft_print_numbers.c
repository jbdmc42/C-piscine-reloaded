#include <unistd.h>

void	ft_putchar(void)
{
	write(1, "0123456789", 10);
}

void	ft_print_numbers(void)
{
	ft_putchar();
}

/* int	main(void)
{
	ft_print_alphabet();
	return (0);
} */