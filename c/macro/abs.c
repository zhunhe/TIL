#include <stdio.h>

#define ABS(N)	(N < 0 ? ((N) * (-1)) : N)

int	main(void)
{
	printf("%d\n", ABS(-1123+123));
	return (0);
}
