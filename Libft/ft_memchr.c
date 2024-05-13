#include <unistd.h>
void * ft_memchr( const void * memoryBlock, int searchedChar, size_t size )
{
	//memory bloc = adresse du bloc de mémoire
	//searched char = code numérique de l'octet rechercher
	//indique la taille du bloc de memoire dans le lequel effectuer la recherche
	
	size_t    i;
	char	*string;

	if (memoryBlock == NULL)
		return (NULL);
	
	i = 0;
	string = (void *)memoryBlock;
	while (i < size)
	{
		if (string[i] == (char)searchedChar)
			return (&string[i]);

		i++;
	}
	return (NULL);
}

