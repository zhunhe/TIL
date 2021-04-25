#include <stdio.h>
#include <stdlib.h>

#define LEN		100

int	main(void)
{
	int	array[LEN] =
	{
		[0 ... 9] = 0,
		[10 ... 19] = 1,
		[20 ... 29] = 2,
		[30 ... 39] = 3,
		[40 ... 49] = 4,
		[50 ... 59] = 5,
		[60 ... 69] = 6,
		[70 ... 79] = 7,
		[80 ... 89] = 8,
		[90 ... 99] = 9
	};

	for (int idx = 0; idx < LEN; ++idx)
	{
		printf("%d ", array[idx]);
		if (idx % 10 == 9)
			printf("\n");
	}
	return (0);
}
