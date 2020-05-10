
#include "libft.h"

static char	*fail_start(void)
{
	char *array;

	array = (char *)malloc(sizeof(char) * 1);
	if (!array)
		return (NULL);
	array[0] = '\0';
	return (array);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			size;
	char			*array;
	char			*dst;

	i = 0;
	dst = (char *)s;
	if (!dst)
		return (NULL);
	size = ft_strlen(dst);
	if (size < start)
		return (fail_start());
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	while (i < len)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
