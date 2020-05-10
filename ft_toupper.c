
int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return (ch);
}
