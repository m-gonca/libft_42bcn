#include <stdio.h>
#include <strings.h>

void *ft_bzero(void *s, size_t n);

int main(void)
{
	char s[] = "hola";
	size_t n;

	n = 0;
	printf("%s\n", s);
	printf("%s\n", ft_bzero(s,n));
	printf("%s\n", bzero(s,n));
	return (0);
}
