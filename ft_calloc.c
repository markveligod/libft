#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void *array;

	array = (void *)malloc(size * number);
	if (!array)
		return (NULL);
	ft_bzero(array, size * number);
	return ((void *)array);
}
