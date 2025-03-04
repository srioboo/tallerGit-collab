#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != 0)
		i++;
	write(1, str, (i + 1));
}

int	main(void)
{
	printf("Hola Mundo!");	
	ft_putstr("test");
	return (0);
}

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!(s) || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}
