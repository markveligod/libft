
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*arr;
	int		i;

	i = 0;
	while (str[i])
		i++;
	arr = (char *)malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
