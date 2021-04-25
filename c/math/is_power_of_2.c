#include <stdio.h>
#include <limits.h>

#define LEN					1000
#define IS_POWER_OF_2		1
#define IS_NOT_POWER_OF_2	0

int	is_power_of_2(int n)
{
	if (n < 2)
		return (IS_NOT_POWER_OF_2);
	return (!(n & (n - 1)) ? IS_POWER_OF_2 : IS_NOT_POWER_OF_2);
}

int	main(void)
{
	int	tmp;

	for (int idx = INT_MIN; idx < INT_MAX; ++idx)
	{
		if (IS_POWER_OF_2 == (tmp = is_power_of_2(idx)))
			printf("is_power_of_2(%d): %d\n", idx, tmp);
	}
	return (0);
}
