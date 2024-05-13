#include <unistd.h>

char *		ft_strrchr( const char * string , int searchedChar )
{
	int i;
	i = 0;
	void *ptr = NULL;

	while(string[i])
	{
		if(string[i] == searchedChar)
		{
			ptr = (char*)&string[i];
		}
	 		i++;	
	}
	
	if(ptr != NULL)
	 return (ptr);
	
	return (NULL);
}

