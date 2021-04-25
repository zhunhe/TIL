#include <stdio.h>
#include <stdlib.h>

#define MOD1(val1, val2) (!val2 ? -1 : (val1 >= 0 ? val1 % val2 : (val1 % val2) + val2))

/* GCC extension: compression statement */
#define MOD2(t, val1, val2)\
({\
	t ret = 0;\
	if (val2)\
		ret = val1 % val2;\
	if (ret < 0)\
		ret += val2;\
	if (!val2)\
		ret = -1;\
	ret;\
})

int	main(int argc, char **argv)
{
	int val1, val2;

	if (argc == 3)
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		printf("%d mod %d = %d\n", val1, val2, MOD1(val1, val2));
		printf("%d mod %d = %d\n", val1, val2, MOD2(int, val1, val2));
	}
	return (0);
}
