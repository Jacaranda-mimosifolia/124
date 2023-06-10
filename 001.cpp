#include<stdio.h>
#include<string.h>
int main()
{
	char *str="hello";
	char a[10]="world";
	printf("%s\n",str);
	printf("%s\n",str+1);
	printf("%s\n",a);
	printf("%s\n",a+1);
	return 0;
}
