#include <unistd.h>
void *ft_memcpy(void *dest, const void *src, size_t size)
{
	if(dest != NULL && src != NULL)
	{
		int i;
		i = 0;

		while(i != ( int )size)
		{
			((char*)dest)[i] = ((char*)src)[i];
			i++;
		}
		return(dest);
	}
	return (0);
}
