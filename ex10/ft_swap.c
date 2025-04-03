/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int a = 0, b = 1;

	printf("BEFORE:\na:%d\nb:%d\n\n", a, b);
	ft_swap(&a, &b);
	printf("AFTER:\na:%d\nb:%d\n", a, b);
	return (0);
} */