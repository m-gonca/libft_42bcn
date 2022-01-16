#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

int main(void)
{
	const char s[20] = "0123";
	
	printf("%zu\n", ft_strlen(s));
	printf("%lu\n", strlen(s));
	return (0);
}
