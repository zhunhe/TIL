#include <stdio.h>

int	main(void)
{
	const char *src = "abcaaabbbccfaabbcc";
	char dst[100] = {0, };

	// *src가 abc중에 있을 경우 dst에 값을 넣어주고 abc가 아닌 값을 만날 경우 종료한다
	sscanf(src, "%[a-c]", dst);

	printf("%s\n", dst);

	return 0;
}
