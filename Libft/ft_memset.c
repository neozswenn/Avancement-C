void 	*ft_memset( void *pointer, int value, int count )
{
	int		i;
	i = 0;
	
	while ( i != count )
	{
		( (char*) pointer)[i] = value;
		i++;
	}	
	return (pointer);
}
