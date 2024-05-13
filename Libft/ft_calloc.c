#include <unistd.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;

	i = 0;

	 	while (i != (int)n)
	 	{
			((char*) s)[i] = 0;
			i++;
	 	}

}

void	* ft_calloc( size_t elementCount, size_t elementSize )
{
	char	*p;
	
	if( elementCount == 0 || elementSize == 0)
	return ( NULL );

	p = malloc(elementCount * elementSize);
	ft_bzero(p, elementCount * elementSize);
	return (p);
}

