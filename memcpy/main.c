#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int	main(void)
{
//	char dst[] = "hola";
//	char src[] = "adios";
	char str[] = "aabbccdd";
	size_t n;

	n = 6;

//	printf("%s %s\n", src, dst);
	printf("%s\n", ft_memcpy((str + 4), str, n));
	printf("%s\n", memcpy((str + 4), str, n));
	return (0);
}
