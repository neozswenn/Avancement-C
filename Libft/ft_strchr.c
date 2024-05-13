#include <unistd.h>

char *		ft_strchr( const char * string , int searchedChar )
{
	int i;
	i = 0;


	while(string[i])
	{
		if(string[i] == searchedChar)
		{
			return((char *)&string[i]);
		}
	 i++;	
	}
	return (NULL);
}
