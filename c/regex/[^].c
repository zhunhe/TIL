#include <stdio.h>

int	main(void)
{
	const char *src = "abcaa|bbbccfaabbcc";
	char dst1[100] = {0, };
	char dst2[100] = {0, };

//	sscanf(src, "%[^|]|%*c[^f]", dst1, dst2); 와 같음
	sscanf(src, "%[^f|]%*c%[^f|]", dst1, dst2);

	printf("%s\n", dst1);	// abcaa
	printf("%s\n", dst2);	// bbbcc

	return 0;
}
