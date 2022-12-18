#include "libft.h"

int ft_isspace(int n)
{
    return ((n >= 9 && n <= 13) || n == 32);
}

/*int main()
{
    char c = '\t';

    if (ft_isspace(c))
        printf("%c es un espacio", c);
    else
        printf("%c no es un espacio", c);
    return (0);
}*/
