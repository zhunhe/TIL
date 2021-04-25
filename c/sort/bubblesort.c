/*
** Bubble Sort
** time complexity: O(n^2) Ω(n)(using flag) θ(n^2)
** space complexity: O(1)
**
** Measure time with sorted array
** bubblesort
** ./a.out  10.50s user 0.03s system 96% cpu 10.916 total
** flag_bubblesort
** ./a.out  0.00s user 0.00s system 0% cpu 0.393 total
*/

#include <stdio.h>

#define LEN		100000
#define YES		1
#define NO		0
#define PRINT	0

void	swap(int *val1, int *val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

void	flag_bubblesort(int *list, int len)
{
	int sorted = NO;

	for (int i = 0; i < len - 1 && sorted == NO; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			sorted = YES;
			if (list[j] > list[j + 1])
			{
				swap(&list[j], &list[j + 1]);
				sorted = NO;
			}
		}
	}
}

void	bubblesort(int *list, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - 1 - i; ++j)
		{
			if (list[j] > list[j + 1])
				swap(&list[j], &list[j + 1]);
		}
	}
}

void	print_list(int *list, int len)
{
	for (int idx = 0; idx < len; ++idx)
		printf("%d ", list[idx]);
	printf("\n");
}

int	main(void)
{
	int list[LEN];

	// setting sorted data
	for (int idx = 0; idx < LEN; ++idx)
		list[idx] = idx;

#if PRINT
	printf("before: ");
	print_list(list, LEN);
#endif

#if 0
	bubblesort(list, LEN);	// original bubblesort
#else
	flag_bubblesort(list, LEN);	// bubblesort using flag
#endif

#if PRINT
	printf("after: ");
	print_list(list, LEN);
#endif
	return (0);
}
