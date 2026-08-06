#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
int	main()
{
	unsigned int	octet;
	unsigned int	result;

	octet = 100;
	result = swap_bits(octet);
	printf("%u\n", result);

}
