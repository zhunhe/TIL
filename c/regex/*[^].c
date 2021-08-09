#include <stdio.h>

int	main(void)
{
    const char *src = "abcd|1234|ㄱㄴㄷㄹ|";
    char dst1[100] = {0};
    char dst2[100] = {0};
    
    sscanf(src, "%*[^|]|%[^|]|%[^|]", dst1, dst2);
    
    printf("%s\n", dst1);	// abcd
    printf("%s\n", dst2);	// ㄱㄴㄷㄹ
        
    return 0;
}
