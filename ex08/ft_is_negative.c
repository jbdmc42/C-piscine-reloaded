#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
		return ;
	}
	write(1, "P", 1);
}

/* int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(7);
	ft_is_negative(2);
	ft_is_negative(0);
	return (0);
} */