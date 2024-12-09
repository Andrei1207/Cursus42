size_t  ft_strlen(const char *s)
{
        size_t  i;

        i = 0;
        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}

int     ft_atoi(char *str)
{
        int     i;
        int     sign;
        int     nb;

        i = 0;
        while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
                        || str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
                i++;
        sign = 1;
        while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
        {
                if (str[i] == '-')
                        sign *= -1;
                i++;
        }
        nb = 0;
        while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
        {
                nb = nb * 10 + str[i] - '0';
                i++;
        }
        return (nb * sign);
}

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int    i;

        i = 0;
        if (n == 0)
                return (0);
        while (s1[i] == s2[i] && s1[i] && i < n - 1)
                i++;
        return (s1[i] - s2[i]);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
        unsigned int    i;
        unsigned int    j;
        unsigned int    s;
        unsigned int    d;
        int     it;

        j = 0;
        it = 0;

        while (dest[it] != '\0')
        {
                it++;
        }
        i = ft_strlen(dest);
        it = 0;

        while (dest[it] != '\0')
        {
                it++;
        }
        d = ft_strlen(dest);
        it = 0;

        while (src[it] != '\0')
        {
                it++;
        }
        s = ft_strlen(src);
        it = 0;

        if (size < 1)
                return (s + size);
        while (src[j] && i < size - 1)
        {
                dest[i] = src[j];
                j++;
                i++;
        }
        dest[i] = '\0';
        if (size < d)
                return (s + size);
        else
                return (d + s);
}

int     ft_isalpha(unsigned char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (!(str[i] >= 'A' && str[i] <= 'Z') || !(str[i] >= 'a' && str[i] <= 'z'))
                        return (0);
                i++;
        }
        return (1);
}

int     ft_isdigit(int c)
{
        if (c <= 9 && c >= 0)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}

