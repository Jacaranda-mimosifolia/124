#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MALLOC(num,type) (type *)malloc(num * sizeof(type))
int main()
{
	char *str="hello world!";
	char *p_str=MALLOC(11,char);
	strcpy(p_str,str);
	puts(p_str);
	return 0;
}
