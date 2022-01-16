#include <ctype.h>
#include <stdio.h>

int ft_isprint(unsigned char c);

int main(void)
{
	unsigned char c;
	
	c = 'ü';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	return (0);
}
