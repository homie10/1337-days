#include <stdio.h>
#include <unistd.h>

int occ_a(char *str)
{
  int i = 0;
  int count = 0;

  while (str[i] !=  '\0')
  {
    if (str[i] == 'A')
    {
      count++;
    }
    i++;
  }
  return (count);
}
int main()
{
  char x[] = "bbaAbyA";
  int resault = occ_a(x);

  printf("%d", resault);
  return 0;
}
