char **ft_split(char *str, char *charset);

int	main(void)
{
	char	**result;
	char	str[] = "hello%-%world  %-%abc";
	char	charset[] = "%-%";

	result = ft_split(str, charset);
}
