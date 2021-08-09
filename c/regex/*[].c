#include <stdio.h>

int	main(void)
{
	const char *src = "abcaaabbbccfaabbcc";
	char dst[100] = {0, };

	// *src에서 a,b,c가 아닌 값이 나오면 그 이후를 *dst에 저장
	sscanf(src, "%*[a-c]%s", dst);

	printf("%s\n", dst);

	return 0;
}
