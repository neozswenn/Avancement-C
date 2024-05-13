#include <unistd.h>

size_t ft_strlen(const char *s)
{
	int i;
	i = 0;
	while(s[i])
		i++;
	return (i);
}


size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	
	int size_src = ft_strlen(src);

	if( ft_strlen(dest) == 0)
	return (0);

	int i;
	i = 0;

	while( src[i] != '\0' || ft_strlen(dest) != (size - 1) )
	{
		dest[i] = src[i];
	}
	return(size_src);
}
