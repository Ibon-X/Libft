#include "libft.h"

int ft_issign(int n)
{
    return (n == '+' || n == '-');
}

int main()
{
    char c = '+';

    if (ft_issign(c))
        printf("%c es un signo", c);
    else
        printf("%c no es un signo", c);
    return (0);
}