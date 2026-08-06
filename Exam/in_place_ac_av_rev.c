#include <unistd.h>

int main(int argc, char *argv[])
{
  int i;
  int j;
  int size = 0;
  char temp;

  if (argc == 2)
  {
    i = 0;
    while (argv[size])
    {
      size++;
    }
    j = size - 1;
    while (i < j)
    {
      temp = argv[i][];
      argv[i] = argv[j];
      argv[j] = temp;
      i++;
      j--;
    }
    write(1, &argv[i][j], 1);
    i++;
    j++;
  }
}
