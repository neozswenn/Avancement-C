int   ft_atoi(const char *nptr)
{
    int        i;
    int        stock;
    int        counter;

    stock = 0;
    i = 0;
    counter = 1;
    while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
    {
        i++;
    }
    while (nptr[i] == '+' || nptr[i] == '-')
    {
        // si il y a + puis apres un - il return 0
        // inversement aussi si il y a un - puis un + il return 0
        if (nptr[i + 1] == '+')
            return (0);
        if (nptr[i] == '-') 
            counter *= -1; // ici on compte le nombre de sign que je dois afficher
        if (nptr[i + 1] == '-')
            return (0);
        i++;
    }
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        // ici ta conversion etait vraiment bien.
        stock = stock * 10 + (nptr[i] - '0');
        i++;
    }
    return (counter * stock);
    // tu les mutiplie pour avoir le bon signe
}

#include <stdio.h>
#include <stdlib.h>

int    main()
{
    char str[] = "       1234ab55";
    printf("%d\n", ft_atoi(str));
    printf("%d\n", atoi(str));
}
