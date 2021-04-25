#include <stdio.h>

/*
** not recommended
** if you use this macro in if-else statement
** without curly braket, it will be compile error
*/
#define SWAP1(t, x, y)\
{\
	t tmp = x;\
	x = y;\
	y = tmp;\
}

/* do-while(0) for compile */
#define SWAP2(t, x, y)\
do{\
	t tmp = x;\
	x = y;\
	y = tmp;\
} while (0)

/* GCC extension: compression statement */
#define	SWAP3(t, x, y)\
({\
	t tmp = x;\
	x = y;\
	y = tmp;\
})

int	main(void)
{
	int a = 3;
	int b = 5;

	printf("before a: %d, b: %d\n", a, b);
	if (1)
#if 1
		SWAP1(int, a, b)	// Without ';' compile is OK but not recommended
#elif 0
		SWAP2(int, a, b);	// using do-while(0) is recommended
#else
		SWAP3(int, a, b);	// It may not compile without gcc
#endif
	else
		;
	printf("after a: %d, b: %d\n", a, b);
	return (0);
}
