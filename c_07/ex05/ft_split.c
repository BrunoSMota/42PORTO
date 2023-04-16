#include <stdio.h>

int posi(char *str, char *charset)
{
    int i;
    int j;
    int l;

    l = 0;
    i = 0;
    while(str[i] != '\0')
    {
        j = 0; 
        while(charset[j] != '\0')
        {
            if(charset[j] == str[i])
            {
                l++;
                break;
            }
            j++;
        }
        i++;
    }
    return (l);
}

/*int	ft_intlen(int *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}*/
int ft_split(char *str, char *charset)
{
    int i;
    //char **array;

    i = posi(str, charset);
    //array = malloc((sizeof(char *) * i));
    return (i);
}

int main(void)
{
    char *str = "casa amarela";
    char *charset = "corsa";
    printf("%d\n", ft_split(str, charset));
}