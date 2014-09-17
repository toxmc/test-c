#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,i;

	p = (int *)malloc(6*sizeof(int));//给p分配6个int大小的内存
	if(p == NULL)
	{
		printf("内存分配错误\n");
		exit(0);
	}

	for(i=0;i<6;i++,p++)
	{
		*p=i;
		printf("%2d",*p);
	}
	printf("\n");
	printf("ok\n");
	free(p-6);//注意不能使用free(p)因为这一步的p与分配内存的p地址增加了6所以这里要释放p-6
	p = NULL;
	return 0;
}
