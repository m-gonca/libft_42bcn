#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(char i);

int	main(void)
{
	char	i;

	i = 'a';
	printf("%d\n", ft_isdigit(i));
	printf("%d\n", isdigit(i));
	return (0);
}
