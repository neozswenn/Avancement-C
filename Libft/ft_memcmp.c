#include <unistd.h>

int	ft_memcmp( const void * pointer1, const void * pointer2, size_t size)
{
	unsigned long	i;
	i = 0;
	
	while( i != size)
	{
	int var = *(unsigned char *)pointer1++ - *(unsigned char *)pointer2++;
	if( var ) return (var);	
	 i++;
	}
	return (0);
}
