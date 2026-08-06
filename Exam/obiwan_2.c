#include <unistd.h>

 void	obiwan(char *str)
{
	int	i;
	int	pos;
	int	after_num;

	i = 0;
	pos = 0;
	after_num = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			after_num = 1;
		else if (str[i] >= 'a' && str[i] <= 'z'
				|| str[i] >= 'A' && str[i] <= 'Z')
		{
			if (pos == 0 && after_num == 1)
				pos = 1;
			if (pos % 2 == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else if (pos % 2 == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			pos++;
			after_num = 0;
		}
		else
			pos = 0;
		write(1, &str[i], 1);
		i++;
	}
}
int	main()
{
       	char  str[] = "Hello World\n";
       	char  str1[] = "42 Born To Code\n";
       	char  str2[] = "Star Wars Saga\n";
	
	obiwan(str);
	obiwan(str1);
	obiwan(str2);
}
