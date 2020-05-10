
int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}
