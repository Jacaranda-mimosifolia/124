#include<stdio.h>
int main()
{
	char *str="hello";
	for(int i=0;*(str+i);i++)
	{
		printf("%c",*(str+i));
	}
	return 0;
}
