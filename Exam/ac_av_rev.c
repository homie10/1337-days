#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
  i = 1;
  while (argv[i])
  {
    j = 0;
	  while (argv[i][j])
	  {
		  j++;
    }
    j--;
	  while (j >= 0)
    {
      write(1, &argv[i][j], 1);
		  j--;
	  }
    write(1, " ", 1);
    i++;
  }
}
