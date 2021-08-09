#include <stdio.h>

int main(void)
{
	char *src = "aaaa bbbb cccc";
	char dst[100] = {0};

	// '*' assignment suppress flag
	sscanf(src, "%*s%s%*s", dst);
	printf("%s\n", dst);	// bbbb

	return 0;
}
