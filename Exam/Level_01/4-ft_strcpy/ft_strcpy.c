#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// Sınavda main metodu silinip gönderilmeli!!
int main()
{
	char s1[20] = "string1-324324";
    char s2[9] = "string2";
    printf("s1: %s, s2: %s\n", s1, s2);
    
    char *result = ft_strcpy(s1, s2);
	printf("s1: %s, s2: %s\n", s1, s2);
}
