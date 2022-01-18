void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	str[] = "Bonjour les aminches\t\t\nc est fou\ttout\tce qu on peut faire avec\t\t\nprint_memory.\t\t\nlol\nlol\t .";

	ft_print_memory(str, 91);
}
