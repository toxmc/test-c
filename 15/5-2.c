#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *p;

	p = (char *)malloc(60*sizeof(char));
	if(p == NULL)
	{
		printf("内存分配错误\n");
		exit(0);	
	}
	strcpy(p,"hello world!nice to meet you!\n");
	
	printf("%s\n",p);
	
	free(p);
	p = NULL;
	return 0;
}
