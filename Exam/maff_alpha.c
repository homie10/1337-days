#include <unistd.h>

int main()
{
  int i;

  i = 'a';
  while(i <= 'z')
  {
	  if(i % 2 == 1)
	  {
		  i -= 32;
	  }
	  write(1, &i, 1);
	  i++;
  }

  return 0;
}
