#include <ctype.h>
#include <stdio.h>

int ft_isascii(char c);

int	main(void)
{
	char c;

	c = 'à';

	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	return (0);
}
