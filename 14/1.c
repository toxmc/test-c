#include<stdio.h>
#include<stdlib.h>

#define N 4

//使用c99编译 加上-std=c99
//
//选择排序
void select_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min_index = i;
		//找出第i小的数所在的位置
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min_index])	
			{
				min_index=j;
			}	
		}
		
		//将第i小的数放在第i的位置上
		if(i!=min_index)
		{
			int temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}
	}
}

int main()
{
	int num[N] = {4,3,2,1};
	
	select_sort(num,N);
	for(int i=0;i<N ; i++)
	{
		printf("%d  ",num[i]);
	}
	
//	system("pause");//windows下使用,在windows平台写代码为了在终端看到运行结果
	return 0;
}
