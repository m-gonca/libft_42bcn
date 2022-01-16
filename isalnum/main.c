#include <ctype.h>
#include <stdio.h>

int ft_isalnum(unsigned char c);

int main(void)
{
	char c;
	
	c = '"';

	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0);
}
