// 💡
// Cette fonction return 1 si il peut etre afficher sinon il return 0
// quel sont les caracteres imprimable ? 
// petite recherche sur google c'est de 32 à 127
// 32 correspond a l'espace dans la table ascci et 127 DEl 
// par exemple le caractere qui corresponds à 9 dans la table ascii n'est pas printable
// le char 9 corresponds tab horizontal (la tabulation) 

#include <ctype.h> // pour utiliser la vrai fonction 

int ft_isprint(int c)
{
    // si il est compris dans la range des char imprimable on return 1 

    if (c >= 32 && c <= 127)
        return (1);
    // ici je ne met pas de else car si il va dans le if il va sarreter avec le return (1) 
    // et si il ne passe par le if il va forcement return (0);
    // tu vois les deux returns ne sont pas sur la meme ligne vertical , le return 0 est decaler 
    return (0);
}
