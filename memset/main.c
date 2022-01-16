#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int main(void)
{
	int c;
	char b[] = "hola";
	size_t len;

	c = 'x';
	len = 2;
	
	printf("%s\n", ft_memset(b, c, len));
	printf("%s\n", memset(b, c, len));
	return (0);
}
