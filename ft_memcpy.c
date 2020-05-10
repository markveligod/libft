
#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	i = 0;
	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (!n || destination == source)
		return (destination);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
