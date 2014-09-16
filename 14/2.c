#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 4

//定义冒泡排序算法
void bubble_sort(int a[],int n);
void bubble_sort_better(int a[],int n);


//一般实现
void bubble_sort(int a[],int n)
{

	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
			}
		}
		printf("%d\n",i);
	}
}

//优化实现
void bubble_sort_better(int a[],int n)
{
	bool status = false;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
				status = true;
			}
		}
		if(!status)
		{
			break;
		}
		printf("%d\n",i);
	}
}

int main()
{
	int a[]= {1,2,3,4};
	//bubble_sort(a,N);	
	bubble_sort_better(a,N);	
	
	for(int i=0;i<N;i++)
	{
		printf("%d ",a[i]);	
	}
}
