#include "stdio.h"

int main()
{
	int a=1,b=2;
	char c = 'c',d = 'd';
	if(a>b)
	{
		printf("%c\n",c);
		printf("abc\r\n");
	}
	else
	{
		printf("%c",d);
		printf("efg\r\n");
	}
	return 1;
}
