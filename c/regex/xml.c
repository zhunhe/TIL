#include <stdio.h>
#include <string.h>

int	main(void)
{
    FILE *xml = NULL;
 
    if (!(xml = fopen("test.xml", "r")))
        return (1);
    while (!feof(xml))
    {
        char markup[100] = {0};
        char value[100] = {0};
 
        fscanf(xml, "%*[<\t\r\n ]%[^>]%*[>]%[^<]%*[</]%*[^>]%*[>]", markup, value);
		if (strlen(markup) && strlen(value))
			printf("%s:%s\n", markup, value);
    }
    return (0);
}
