#include <unistd.h>

int        main(int ac, char **av)
{
    int i = 0, count = 1;
    char *str = av[1];
    
    if (ac == 2)
    {
        while (str[i])
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                count = str[i] - 64;
            else if (str[i] >= 'a' && str[i] <= 'z')
                count = str[i] - 96;
            while (count)
            {
                write(1, &str[i], 1);
                count--;
            }
            count = 1;
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
