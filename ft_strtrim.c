
#include "libft.h"

static int			check_set(char ch, char *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (ch == set[j])
			return (1);
		j++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len;
	int				count;
	char			*start;
	char			*end;
	char			*array;

	if (!s1 || !set)
		return (NULL);
	count = 0;
	while (s1[count] && check_set((char)s1[count], (char *)set))
		count++;
	start = (char *)&s1[count];
	count = ft_strlen(s1) - 1;
	if (count != -1)
		while (count >= 0 && check_set((char)s1[count], (char *)set))
			count--;
	end = (char *)&s1[count];
	len = (!*s1 || end == start) ? 2 : end - start + 2;
	if (!(array = malloc(sizeof(char) * len)))
		return (NULL);
	ft_strlcpy(array, start, len);
	return (array);
}
