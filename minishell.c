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
