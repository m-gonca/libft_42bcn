#include <string.h>
#include <stdio.h>

//void	*ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
	char dst[] = "holas";
	char src[] = "xxxxxxxxx";
	size_t len;

	len = 6;
	printf("%s %s\n", src, dst);
//	printf("%s\n", ft_memmove(dst, src, len));
	printf("%s\n", memmove(dst, src, len));
	return (0);
}
