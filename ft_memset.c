
#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	char ch;
	char *str;

	ch = (char)c;
	str = (char *)destination;
	while (n--)
		*str++ = ch;
	return (destination);
}
